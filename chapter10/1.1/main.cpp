#include "iostream"
#include <string.h>
#include "stdafx.h"






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



int main(int argc, _TCHAR* argv[])
{
	char cstr[20];
	int numer;
	int bill;
	int number;
	std::cout << "Enter number of customers: ";
	std::cin >> number;

	account *p = new account[number];
	for (int i; i < number; i++){
		
		cout << "Enter the name of customer: ";
		std::cin.getline(cstr, 20);
		cout << "Enter number of account: ";
		cin >> number;
		cout << "Enter quantity of money (balance): ";
		cin >> bill;

			
		
	}
	
	system("pause");
	
	return 0;
}
