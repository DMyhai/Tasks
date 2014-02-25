#include <iostream>
#include <string.h>


//using namespace std;


class  account {

    public:
        account();
        account(char Name[], int number, int bill);

    private:
        char Name [20];
        int number;
        int bill;
};

account::account(char Name[], int number, int bill  ){
    strcpy(this->Name, Name);
    this->number = number;
    this->bill = bill;
}



int main()
{

    int number;
    std::cout<<"Enter number of customers: ";
    std::cin>>number;



    account *p = new account [size] ;
    //pointer[0]("vaza", 3, 2);
    return 0;
}
