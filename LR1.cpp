#include <iostream>
#include <cmath>
#include <iomanip>

int main()
{
	std::cout << "Hello!\n";

	//1
	 double x = 0.0;
	std::cout << "Equation is 8x^2 + x^4 - 1 \nEnter x value: ";							
	std::cin >> x;
	double result = 8 * pow(x, 2) + pow(x, 4) - 1;
	std::cout << std::fixed;
	std::cout.precision(3);
	std::cout << "\nOtvet " << result;

	//2

	unsigned int a;
	std::cout << "\nEquation is 3*|a|-2*(a+6)^1/2  \nEnter a value: ";					 
	std::cin >> a;
		int resultq = 3 * abs(a) - 2 * sqrt(a + 6);
	std::cout << "\nThe result is " << std::showpos << resultq;

	//3
	bool m = 0,						
		n = 0,
		l = 0,
		k = 0;
	std::cout << "\nEquation is m⊕n∧(¬l∨k) = \nEnter m value: ";					 
	std::cin >> m;
	std::cout << "Enter n value: ";
	std::cin >> n;
	std::cout << "Enter l value: ";
	std::cin >> l;
	std::cout << "Enter k value: ";
	std::cin >> k;
		long int resultw = (m xor n) && ((!l) || k);
	std::cout << "\nThe result is " << std::boolalpha << resultw;

	//4
	int b = 0;						
	std::cout << "\nEquation is 2^b \nEnter b value: ";							 
	std::cin >> b;
		long int resulte = pow(2, b);
	std::cout << "\nThe result is " << std::dec << std::noshowpos << resulte << "\nThe result in oct " << std::oct << resulte;

	//5
	unsigned short int f = 0,		 
		c = 0,
		e = 0,
		d = 0;
	std::cout << "\nEquation is f∨~(c∧(e⊕d)) = \nEnter f value: ";		     
	std::cin >> f;
	std::cout << "Enter c value: ";
	std::cin >> c;
	std::cout << "Enter e value: ";
	std::cin >> e;
	std::cout << "Enter d value: ";
	std::cin >> d;
		unsigned short int resultr = (f) | (~(c & (((~e) & d) | ((~d) & e))));
	std::cout << "\nThe result is " << std::setw(6) << std::setfill('0') << std::internal << std::hex << std::showbase << resultr;
	return 0;
}
