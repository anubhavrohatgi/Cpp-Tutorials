/*
			ESCAPE SEQUENCES

		Write a program to print the following picture.Take note that you need to use escape sequences to print special characters.
		
					  '__'
					  (oo)
			  +========\/
			 / || %%% ||
			*  ||-----||
			   ""     ""




			   Escape Sequence		Description					Hex (Decimal)
			   \n				New-line(or Line-feed) 				0AH (10D)
			   \r				Carriage-return						0DH (13D)
			   \t				Tab									09H (9D)
			   \"				Double-quote (needed to include
								" in double-quoted string)			22H (34D)
			   \'				Single-quote						27H (39D)
			   \\				Back-slash (to resolve ambiguity)	5CH (92D)



*/


#include <iostream> // done to include input output streams



int main()
{

	std::cout << "\n           \'  \'";
	std::cout << "\n           (oo)";
	std::cout << "\n   +========\\\/";
	std::cout << "\n \/ || %%% ||";
	std::cout << "\n*  ||-----||";
	std::cout << "\n   \"\"     \"\"";
	std::cout << std::endl;

	//for pausing the output screen or rather isssuing a sleep command to the processor
	system("pause");

	return 0;
}