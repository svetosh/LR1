#include <iostream>
#include <cmath>

int main ()
{
	int b=0;
	std::cout<< "Equation is 2^b \nEnter b value: ";
	std::cin>>b;
	long int result = pow(2,b);
	std::cout << "The result is " << std::dec <<result << "\nin oct " << std::oct << result;
	return 0;
}
