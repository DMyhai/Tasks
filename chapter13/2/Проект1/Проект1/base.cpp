#include "base.h"
//#include <string.h>

#include <iostream>

Cd::Cd(char* s1, char* s2, int n, double x){
	performers = new char[strlen(s1)+1];
	strcpy_s(performers, strlen(s1) + 1, s1);
	label = new char[strlen(s1) + 1];
	strcpy_s(label, strlen(s1) + 1, s2);
	selections = n;
	playtime = x;
}
Cd::Cd(const Cd & d){
	performers = new char[strlen(d.performers)+1];
	strcpy_s(performers, strlen(d.performers) + 1, d.performers);
	label = new char[strlen(d.label) + 1];
	strcpy_s(label, strlen(d.label) + 1, d.label);
	selections = d.selections;
	playtime = d.playtime;
}
Cd::Cd(){
	performers = '\0';
	label = '\0';
	selections = 0;
	playtime = 0;
}

void Cd::Report()const{
	using std::cout;
	using std::endl;
	cout << "Performers: " << performers << endl;
	cout << "Label: " << label << endl;
	cout << "Selections: " << selections << endl;
	cout << "Playtime: " << playtime << endl;
	
}

Cd & Cd::operator=(const Cd & d){
	if (this == &d)
		return *this;
	delete[] performers;
	performers = new char[strlen(d.performers)+1];
	strcpy_s(performers, strlen(d.performers) + 1, d.performers);
	delete[] label;
	label = new char[strlen(d.label) + 1];
	strcpy_s(label, strlen(d.label) + 1, d.label);
	selections = d.selections;
	playtime = d.playtime;
	return *this;
}


Cd::~Cd(){
	delete[] performers;
	delete[] label;
}

Classic::Classic(char*s3, char* s1, char* s2, int n, double x) : Cd(s1, s2, n, x){
	Cd::Report();
	producer = new char[strlen(s3) + 1];
	strcpy_s(producer, strlen(s3) + 1, s3);
};

Classic::Classic(){
	producer = '\0';
}

Classic::~Classic(){
	delete[] producer;
}

void Classic::Report() const  {
	using std::cout;
	using std::endl;
	cout << producer << endl;
}


Classic & Classic::operator=(const Classic & d){
	if (this == &d)
		return *this;
	delete[] producer;
	producer = new char[strlen(d.producer) + 1];
	strcpy_s(producer, strlen(d.producer) + 1, d.producer);
	return *this;
}