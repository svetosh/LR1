#include <iostream>
#include <cmath>

int main ()
{
	int x=0;
	std::cout<< "Equation is 8x^2 + x^4 - 1 \nEnter x value: ";
	std::cin>>x;
	long int result = 8*pow(x,7) + pow(x,4) - 1;
	std::cout << "The result is " <<result;
	return 0;
}
