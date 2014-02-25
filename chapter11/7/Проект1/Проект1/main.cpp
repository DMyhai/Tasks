#include <iostream>
using namespace std;
#include "complex1.h" // to avoid confusion with complex.h
int main()
{
	complex c;
	complex a(3.0, 4.0); // initialize to (3,4i) complex c;
	std::cout << "Enter a complex number (q to quit):\n";
	while (cin >> c)
	{
		cout << "c is " << c << std::endl;
		cout << "complex conjugate is " << ~c << std::endl;
		cout << "a is " << a << std::endl;
			cout << "a + c is " << a + c << std::endl;
		cout << "a - c is " << a - c << std::endl;
		cout << "a * c is " << a * c << std::endl;
		cout << "2 * c is " << 2 * c << std::endl;
		cout << "Enter a complex number (q to quit):\n";
	}
	std::cout << "Done!\n";
	return 0;
}