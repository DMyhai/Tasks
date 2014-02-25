#include <iostream>

using namespace std;

int main()
{
    double dafna = 100;
    double dafna_sum = 100;
    double cleo = 100;
    double d_percent = 0.10;
    double c_percent = 0.05;
    int year = 2014;
    int i_year=0;


    while(1){
        cout << "Year: "<< year<<" Dafna: "<<dafna_sum<<" Cleo: "<<cleo<<endl;
        if (cleo > dafna_sum){
            cout<<"Quantity of years: "<<i_year<<endl;
            break;}
        year+=1;
        dafna_sum += dafna*d_percent;
        cleo+=cleo*c_percent;
        i_year+=1;

    }


    return 0;
}
