#include <iostream>

using namespace std;

int factorial (int );
void output_factor(int , int);


int main()
{
    int number;
    cout<<"Enter you number :";
    while (cin>>number && number > 0){
        output_factor(factorial(number), number);
    }
    cout<<"Thank you"<<endl
        <<"Bye"<<endl;

    return 0;
}



int factorial (int number){
    //int factor = 1;
    if (number > 1){
       return number * factorial(number-1);
    }else {
        return 1;
    }

}


void output_factor(int factor, int number){
    cout<<"Factorial of number "<< number << " is  equal: "<<factor<<endl;

}
