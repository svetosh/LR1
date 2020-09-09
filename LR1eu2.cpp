#include <iostream>
#include <cmath>

int main()
	{
	unsigned int a=0;
		std::cout<< "Equation is 3*|a|-2*(a+6)^1/2 = \nEnter a value: ";
		std::cin>> a;
		long int result = 3*abs(a) - 2*sqrt(a+6);
		std::cout << "The result is " <<result;
	return 0;
	}
