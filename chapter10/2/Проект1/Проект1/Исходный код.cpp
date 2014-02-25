#include <iostream>
#include <string.h>
#include <string>

class Person {
private:
	static const int LIMIT = 25;
	std::string lname;									// Person’s last name
	char fname[LIMIT];								// Person’s first name
public:
	Person() { lname = ""; fname[0] = '\0'; }// #1
	Person(const std::string & ln, const char * fn = "Heyyou"); // #2

	// the following methods display lname and fname
	void Show() const; // firstname lastname format
	void FormalShow() const; // lastname, firstname format
};

Person::Person(const std::string &ln, const char *fn){
	
	this->lname = ln;
	strcpy_s(this->fname, fn);
	
}

void  Person::Show() const {
	std::cout << this->fname << " " << this->lname<<std::endl;		
}

void  Person::FormalShow () const {
	if (!strcmp(this->fname, "Heyyou")){
		std::cout << Person::lname<<std::endl;
	} else {
		std::cout << this->lname << " " << this->fname<<std::endl;
	}
}


int main() {

	Person one; // use default constructor
	Person two("Smythecraft"); // use #2 with one default argument
	Person three("Dimwiddy ", "Sam"); // use #2, no defaults
	one.Show();
	two.Show();
	three.Show();
	std::cout << std::endl;
	one.FormalShow();
	two.FormalShow();
	three.FormalShow();

	system("pause");
	return 0;
}