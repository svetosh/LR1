#include <iostream>
#include <cmath>
#include <iomanip>

int main()
{
	std::cout << "Hello!\n";

	int x = 0,						// Переменная 1го выражения
	a = 0;							// Переменная 2го выражения
	bool m = 0,						// Переменные 3го выражения
		 n = 0,
		 l = 0,
		 k = 0;
	int b = 0;						// Переменные 4го выражения
	unsigned short int f = 0,		// Переменные 5го выражения 
		c = 0,
		e = 0,
		d = 0;

	std::cout << "Equation is 8x^2 + x^4 - 1 \nEnter x value: ";							 // 1e выражение
	std::cin >> x;
		std::cout << "\nEquation is 3*|a|-2*(a+6)^1/2  \nEnter a value: ";					 // 2e выражение
		std::cin >> a;
			std::cout << "\nEquation is m⊕n∧(¬l∨k) = \nEnter m value: ";					 // 3е выражение
			std::cin >> m;
			std::cout << "Enter n value: ";
			std::cin >> n;
			std::cout << "Enter l value: ";
			std::cin >> l;
			std::cout << "Enter k value: ";
			std::cin >> k;
				std::cout << "\nEquation is 2^b \nEnter b value: ";							 // 4е выражение
				std::cin >> b;
					std::cout << "\nEquation is f∨~(c∧(e⊕d)) = \nEnter f value: ";		     // 5е выражение
					std::cin >> f;
					std::cout << "Enter c value: ";
					std::cin >> c;
					std::cout << "Enter e value: ";
					std::cin >> e;
					std::cout << "Enter d value: ";
					std::cin >> d;
	long int result = 8 * pow(x, 7) + pow(x, 4) - 1;				// Условие 1го выражения
	long int resultq = 3 * abs(a) - 2 * sqrt(a + 6);				// Условие 2го выражения
	long int resultw = (m xor n)&&((!l)||k);						// Условие 3го выражения
	long int resulte = pow(2, b);									// Условие 4го выражения
	long int resultr = (f) | (~(c & (((~e) & d) | ((~d) & e))));	// Условие 5го выражения
	 
	std::cout << "\nThe result is " << result;																	 // Результат 1го выражения
	std::cout << "\nThe result is " << resultq;																	 // Результат 2го выражения
	std::cout << "\nThe result is " << resultw;																	 // Результат 3го выражения
	std::cout << "\nThe result is " << std::dec << resulte << "\nThe result in oct " << std::oct << resulte;	 // Результат 4го выражения
	std::cout << "\nThe result is " << std::hex << resultr;														 // Результат 5го выражения
	return 0; 
}





