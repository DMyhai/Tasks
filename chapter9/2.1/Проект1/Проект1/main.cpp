#include <iostream>
#include <string.h>


//using namespace std;


class  account {

public:
	account(char Name[] = "0000", int number = 0, int bill = 0);

private:
	char Name[20];
	int number;
	int bill;
};

account::account(char Name[], int number, int bill){
	strcpy_s(this->Name, Name );
	this->number = number;
	this->bill = bill;
}



int main()
{

	int number;
	std::cout << "Enter number of customers: ";
	std::cin >> number;

	account *p = new account[number];
	
	return 0;
}
