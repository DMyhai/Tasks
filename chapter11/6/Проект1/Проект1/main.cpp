#include <iostream>
#include "stonewt.h"


int main(){
	
	int a;
	double b;
	Stonewt compare = {11, 0};

	Stonewt array[6];
	array[0] = {65.2};
	array[1] = {2, 5};
	array[2] = {23, 9};



	std::cout << "Enter value! "<<std::endl;
	for (int i = 3; i < 6; i++){
		std::cout << " Value number " << i + 1 << std::endl
			<< "Enter stone: " ;
		std::cin >> a;
		std::cout << "Enter pound: ";
		std::cin >> b;
		array[i] = {a, b};
	}

	Stonewt min = array[0];
	Stonewt max = { 0, 0 };
	
	for (int i = 0; i < 6; i++) {
		if (min.operator>(array[i]))
		{
			min = array[i];
		}
		if (max < array[i] )
		{
			max = array[i];
		}
		if (array[i].operator >= (compare))
		{
			std::cout << "Bigger the 11 stone: ";
				array[i].show_stn();
		}
	}
	std::cout << "Min value: ";
		min.show_stn();
	std::cout << "Max value: ";
		max.show_stn();

	system("pause");
	return 0;
}