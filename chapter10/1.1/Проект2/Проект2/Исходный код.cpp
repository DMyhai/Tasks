#include <iostream>
#include <string.h>


class  account {

public:
	account(char Name[] = "0000", int number = 0, int bill = 0);
	bool addmoney(char*, int);
	bool getmoney(char*, int);
	const void getinfo(void);
private:
	char Name[20];
	int number;
	int bill;
};

account::account(char Name[], int number, int bill){
	strcpy_s(this->Name, Name);
	this->number = number;
	this->bill = bill;
}

bool account::addmoney(char* cstr, int bill){
	bool  match = !strcmp(account::Name, cstr);
	if (match){
		account::bill += bill;
		return 1;
	}
	else {
		return 0;
	}

}

bool account::getmoney(char* cstr, int bill){
	bool  match = !strcmp(account::Name, cstr);
	if (match){
		account::bill -= bill;
		return 1;
	}
	else {
		return 0;
	}

}

const void account::getinfo(void){
	std::cout << "Name: " << account::Name << std::endl;
	std::cout << "Number: " << account::number << std::endl;
	std::cout << "Bill: " << account::bill << std::endl;

}

int main()
{
	char cstr[20];
	int size;
	int bill;
	int number;
	bool change = 0;
	bool take = 0;

	std::cout << "Enter number of customers: ";
	std::cin >> size;
	std::cin.get();


	account *p = new account[size];


	for (int a = 0; a < size; a++) {

		std::cout << "Customer number: " << a + 1 << std::endl;
		std::cout << "Enter the name of customer: ";
		std::cin.getline(cstr, 20);
		std::cout << "Enter number of account: ";
		std::cin >> number;
		std::cout << "Enter quantity of money (balance): ";
		std::cin >> bill;
		std::cin.get();
		p[a] = account(cstr, number, bill);
	}

	int i = 0;
	std::cout << "Add money " << std::endl;
	while (!change) {
		std::cout << "Enter name of customer : ";
		std::cin.getline(cstr, 20);
		std::cout << "Enter quantity of money which you are going to put:  ";
		std::cin >> bill;
		std::cin.get();

		while (i < size){
			if (p[i].addmoney(cstr, bill)) {
				std::cout << "You put your money successfully ! " << std::endl;
				change = 1;
				break;
			}
			else if (i == size - 1){
				std::cout << "You enter wrong name. Try again" << std::endl;
				break;
			}

		}

		if (change == 1)
			break;
	}
	std::cout << "Withdrowing money " << std::endl;

	while (!take){
		std::cout << "Enter the name of  customer: ";
		std::cin.getline(cstr, 20);
		std::cout << "Enter amount of money for withdrawing: ";
		std::cin >> bill;

		while (i < size){
			if (p[i].getmoney(cstr, bill)) {
				std::cout << "You withdrow your money successfully ! " << std::endl;
				take = 1;
				break;
			}
			else if (i == size - 1){
				std::cout << "You enter wrong name. Try again" << std::endl;
				break;
			}
		}
		if (take == 1)
			break;
	}

	std::cout << "Your account balance! " << std::endl;
	p[i].getinfo();

	delete[] p;

	system("pause");

	return 0;
}
