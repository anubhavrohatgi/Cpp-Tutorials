//A function or Template that creates a vector of user given size N using new operator

#include <iostream>

template <class T>
T* createArray(size_t N) // template function that returns the pointer
{							// to the array
	return new T[N];
}


//This is a generic array template class that handles a dynamic array
template <class T>
class array
{
	public:

		//Constructor
		array(size_t n) : N(n){
			data = new T[N];
		}

		//Destructor
		~array(){
			if (data)
			{
				delete[] data;
				std::cout << "\nDeleted\n";
			}
		}

		T& operator[](size_t index){
			return data[index];
		}

		void operator= (T val) {
			for (size_t i = 0; i < N; i++)
				data[i] = val;			
		}
		
	private:
		T *data;
		size_t N;

};



int main()
{
	int n = 4;

	std::cin >> n;

	//int *a = nullptr;// = new int[n];
	//a = createArray<int>(static_cast<size_t>(n));

	////Lets assign some values to some of them only
	//a[0] = 1;
	//a[1] = 2;
	//a[2] = 3;
	//a[3] = 4;


	//for (int i = 0; i < 4; i++)
	//	std::cout << "\nVal " << i << " = " << a[i];


	array<int> b(n);
	b = 1;//initialize the contents with the value of 1
	b[0] = 5;
	
	for (int i = 0; i < n; i++)
		std::cout << "\nVal " << i << " = " << b[i];

	system("pause");

	return 0;
}