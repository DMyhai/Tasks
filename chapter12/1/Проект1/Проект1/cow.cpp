#include "cow.h"
#include <iostream>

Cow::Cow(){

	name[0] = '\0';
	hobby = 0;
	weight = 0;
}

Cow::~Cow(){
	
	delete[] hobby;
}


Cow::Cow(const char * nm, const char * ho, double wt){
	
	strcpy_s(name, nm);
	int len = strlen(ho);
	hobby = new char[len+1];
	strcpy_s(hobby, len+1, ho);
	weight = wt;

}

Cow::Cow(const Cow &c){
	
	delete[] hobby;
	int len = strlen(c.hobby);
	hobby = new char[len + 1];
	strcpy_s(hobby, len + 1, c.hobby);

}



void Cow::ShowCow() const{
	
	std::cout << " Name: " << name << std::endl
		<< " Hobby: " << hobby << std::endl
		<< "Weighyt: " << weight << std::endl;
}

Cow & Cow :: operator=(const Cow & c){
	
	delete[] hobby;
	strcpy_s(name, c.name );
	int len = strlen(c.hobby);
	hobby = new char[len + 1];
	strcpy_s(hobby, len + 1, c.hobby);
	weight = c.weight;
	return Cow(name, hobby, weight);

}