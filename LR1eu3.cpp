#include <iostream>
#include <cmath>

int main()
{
	bool m=0;
	bool n=0;
	bool l=0;
	bool k=0;
		std::cout<< "Equation is m⊕n∧(¬l∨k) = \nEnter m value: ";
		std::cin>> m;
		std::cout<< "Enter n value: ";
		std::cin>> n;
		std::cout<< "Enter l value: ";
		std::cin>> l;
		std::cout<< "Enter k value: ";
		std::cin>> k;
		long int result = (m xor n)&&((!l)||k);
		std::cout << "The result is " <<result;
	return 0;
}
