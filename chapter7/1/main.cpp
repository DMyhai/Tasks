#include <iostream>

using namespace std;
double harmonic(double, double);

int main()
{
    double f_number;
    double s_number;
    cout<<"Enter a couple of numbers! "<<endl;

    do{
        cout<<"Enter first number: ";
        cin>>f_number;
        cout<<"Enter second numer: ";
        cin>>s_number;
        if(f_number !=0 && s_number!=0 ){
            cout<<"Harmonic mean of your numer equal: "<<harmonic(f_number, s_number)<<endl;

        }else {
            cout<<"You entered zero"<<endl
                <<"Bye"<<endl;

        }

    }while ( (f_number != 0) || (s_number !=0) );
    return 0;
}


double harmonic(double f_number, double s_number){
    double coefficient = 2.0;
    double harmonic;

    harmonic = coefficient*f_number*s_number / (f_number + s_number);
    return harmonic;


}
