#include <iostream>
#include <cstdlib> 
#include <ctime> 
#include <fstream>
#include "vector.h"

int main(){
	
	std::ofstream fout;
	fout.open("vector.txt");
	srand(time(0));
	double direction;
	double distance;
	double step_size;
	unsigned long steps = 0; 

	VECTOR::Vector vector; 
	VECTOR::Vector result(0.0, 0.0);
	VECTOR::Vector step;

	std::cout << "Enter the distance (q-quit) : ";
	while (std::cin >> distance){
		std::cout << "Enter size of step: ";
		if (!(std::cin >> step_size))
			break;
		fout << " Target distance: " << distance << " Step size: " << step_size << std::endl;
		while (result.magval() < distance){
			direction = rand() % 360;
			step.reset(step_size, direction, vector.POL);
			result = result + step; 
			steps++;
			fout << steps << " " << result << std::endl;
		}
	}
	fout << "Average outward distance per step: " <<result.magval()/steps << std::endl;

	std::cout << "After " << steps << " steps, the subject has the follow ing location " << std::endl;
	std::cout << result << std::endl;


	system("pause");
}