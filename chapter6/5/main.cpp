#include <iostream>

using namespace std;

int main()
{

double income;
double tax;
double f_tax_level = 0;
double s_tax_level = 0.10; // percent
double t_tax_level = 0.15; // percent
double fo_tax_level = 0.20; // percent

double f_tax_limit = 5000;
double s_tax_limit = 10000;
double t_tax_limit = 20000;
double fo_tax_limit = 35000;



cout<<"Enter your income: ";
while(cin>>income){
    if (income <= f_tax_limit ){
        tax = income * f_tax_level;
        cout<<"Your tax is: "<<tax<<endl;
    }else if ( income <= s_tax_limit && income > f_tax_limit ){
        tax = (f_tax_limit * f_tax_level) + ((income - f_tax_limit ) * s_tax_level);
        cout<<"Your tax is: "<<tax<<endl;
    }else if ( income <= t_tax_limit && income > s_tax_limit ){
        tax = (f_tax_limit * f_tax_level) + (s_tax_limit* s_tax_level) + ((income - (f_tax_limit + s_tax_limit)) * t_tax_level);
        cout<<"Your tax is: "<<tax<<endl;
    }else if (income <= fo_tax_limit && income > t_tax_limit){
        tax = (f_tax_limit * f_tax_level) + (s_tax_limit* s_tax_level) + (t_tax_limit * t_tax_level)
            +((income - ( f_tax_limit + s_tax_limit + t_tax_limit)) * fo_tax_level);
        cout<<"Your tax is: "<<tax<<endl;
    }else if (income > fo_tax_limit){
        tax = (f_tax_limit * f_tax_level) + (s_tax_limit* s_tax_level)+ (t_tax_limit * t_tax_level )
             +(fo_tax_limit * fo_tax_level) + ((income - (f_tax_limit + s_tax_limit + t_tax_limit + fo_tax_limit )) * fo_tax_level);
        cout<<"Your tax is: "<<tax<<endl;
    }
    }

cout<<"Bye"<<endl;


    return 0;
}
