#include <iostream>
#include "stonwt.h"



int main(){

	double lbs;
	double lbs1;
	int stonew;
	Stonewt stonewt();
	Stonewt result;

	std::cout << " Enter value in stonew: ";
	std::cin >> lbs;
	Stonewt stonewt1(lbs);
	
		std::cout << "Enter value in stown and lbs. Stonew: ";
		std::cin >> stonew;
		std::cout << "Pounds: ";
		std::cin >> lbs1;
	
	Stonewt stonewt2(stonew , lbs);

	result.setModeToInt();
	result.setModeToDouble();


	std::cout << "Addition : " << std::endl;
	result = stonewt2 + stonewt1;
	operator << (std::cout , result);
	
	std::cout << "Multiplexion: " << std::endl;
	result = stonewt2 * stonewt1;
	operator << (std::cout, result);

	std::cout << "Subtraction" << std::endl;
	result = stonewt2 - stonewt1;
	operator << (std::cout, result);


	system("pause");

	return 0;
}