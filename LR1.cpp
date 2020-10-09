#include <iostream>
#include <cmath>
#include <iomanip>

int main()
{
	std::cout << "Hello!\n";


	int x = 0;
	std::cout << "Equation is 8x^2 + x^4 - 1 \nEnter x value: ";							
	std::cin >> x;
		long int result = 8 * pow(x, 7) + pow(x, 4) - 1;
	std::cout << "\nThe result is " << result;
	//

	int a;
	std::cout << "\nEquation is 3*|a|-2*(a+6)^1/2  \nEnter a value: ";					 
	std::cin >> a;
		long int resultq = 3 * abs(a) - 2 * sqrt(a + 6);
	std::cout << "\nThe result is " << resultq;

	//
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
	std::cout << "\nThe result is " << resultw;

	//
	int b = 0;						
	std::cout << "\nEquation is 2^b \nEnter b value: ";							 
	std::cin >> b;
		long int resulte = pow(2, b);
	std::cout << "\nThe result is " << std::dec << resulte << "\nThe result in oct " << std::oct << resulte;

	//
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
		long int resultr = (f) | (~(c & (((~e) & d) | ((~d) & e))));
	std::cout << "\nThe result is " << std::hex << resultr;														 
	return 0;
}
