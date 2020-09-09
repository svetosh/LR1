#include <iostream>
#include <cmath>
#include <iomanip>

int main()
{
	unsigned short int f=0,
	c=0,
	e=0,
	d=0;
		std::cout<< "Equation is f∨~(c∧(e⊕d)) = \nEnter f value: ";
		std::cin>> f;
		std::cout<< "Enter c value: ";
		std::cin>> c;
		std::cout<< "Enter e value: ";
		std::cin>> e;
		std::cout<< "Enter d value: ";
		std::cin>> d;
		long int result = (f)|(~(c&(((~e)&d)|((~d)&e)))); 
		std::cout << "The result is "<< std::hex <<result;
	return 0;
}
