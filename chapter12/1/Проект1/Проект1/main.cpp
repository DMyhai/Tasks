#include <iostream>
#include "cow.h"



int main() {

	const int MaxLen = 20;
	int number;
	char name[MaxLen];
	char hobby[MaxLen];
	double weight;
	Cow test{ "qwerty", "asdf", 0 };

	std::cout << "Enter quantity of person: ";
	std::cin >> number;
	
	Cow *p = new Cow [number];
	for (int i = 0; i < number; i++){
		std::cout << "Person numer " << i + 1 << std::endl
			<< "Enter name: ";
		std::cin.getline(name, MaxLen);
		std::cout << "Enter hobby: " << std::endl;
		std::cin.getline(hobby, MaxLen).get();
		std::cout << "Enter weight";
		std::cin >> weight;
		Cow cow(name, hobby, weight);
	}

	std::cout << "All data: ";
	for (int i = 0; i < number; i++){
		p[i].ShowCow();
	}
	
	p[3] = test;

	for (int i = 0; i < number; i++){
		p[i].~Cow();
	}
	delete[] p;
	return 0;
}