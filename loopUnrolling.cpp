/*
	unrolling a loop speeds up the process of accessing the elements.

	Loop unrolling, also known as loop unwinding, is a loop transformation
	technique that attempts to optimize a program's execution speed at the
	expense of its binary size, which is an approach known as the space-time
	tradeoff. - Ref: Wikipedia

	Loop unrolling is done to eliminate the overhead of looping. It is (usually)
	only useful for fairly small loops where the number of iterations is small and
	is known at compile time. It is mostly done by the compiler.

	Loop unrolling has performance advantages due to the reduced overhead of checking
	and advancing the loop counter at each iteration. Also, when using vectorized mathematical
	operations such as SSE instructions, it is possible to perform some iterations of the same
	loop in parallel.


	Refer to this blog :http://fastcpp.blogspot.in/2011/04/how-to-unroll-loop-in-c.html
	It provides an indepth overview of how unrolling can be done.
*/


#include <iostream>
#include <assert.h>
#include <vector>
#include <chrono>
using namespace std;


void normalLoop()
{
	for (int i = 0; i < 100; i++) // 1 iteration per loop
		cout << "\tAt " << i;
	cout << endl<<endl;
}

void loopUnrolledSimple()
{	
	for (int x = 0; x < 100; x += 5) // five iterations done in one flow
	{
		cout << "\tAt " << x;
		cout << "\tAt " << x+1;
		cout << "\tAt " << x+2;
		cout << "\tAt " << x+3;
		cout << "\tAt " << x+4;		
	}

	cout << endl << endl;
}




/* USE OF META PROGRAMMING - TEMPLATES - GENERIC UNROLLING FUCNTION --- Only for C++11 onwards*/

template <size_t N> 
struct uint_{ 
};

template <size_t N, typename Lambda, typename IterT>
inline void unroller(const Lambda& f, const IterT& iter, uint_<N>) {
	unroller(f, iter, uint_<N - 1>());
	f(iter + N);
}

template <typename Lambda, typename IterT>
inline void unroller(const Lambda& f, const IterT& iter, uint_<0>) {
	f(iter);
}

//--------------------------------------------------------------------

int main()
{
	int N = 1000;

	std::vector<double> vec(N,2.5);
	const size_t UnrollFact = 2;

	double sum = 0.;

	// loop body as a lambda 
	auto body = [&](const int& i) { sum += vec[i]; /*= i*(i - 1) * 4 * (i + 1);*/ };

	assert(vec.size() % UnrollFact == 0 && "Vector size must be divisible by the Unrolling Factor");

	auto start = std::chrono::system_clock::now();
	for (size_t i = 0, size = vec.size(); i != size; i += UnrollFact) {
		unroller(body, i, uint_<UnrollFact - 1>());
	}
	auto end = std::chrono::system_clock::now();

	std::cout << "Elapsed time (in msecs): "
		<< std::chrono::duration_cast<std::chrono::milliseconds>(end - start).count()
		<< std::endl;
	std::cout << "\nSum = " << sum<<std::endl;



	//Simple Versions

	normalLoop();

	loopUnrolledSimple();


	system("pause");
	return 0;
}
