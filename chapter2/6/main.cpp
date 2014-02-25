#include <iostream>

using namespace std;

double foo (double);

int main()
{
    double a;
    cout<<"Enter thr number of light years: ";
    cin >> a;
    foo(a);
    cout<<a<<" light years = "<<foo(a)<<" astronomical units"<<endl;


    return 0;
}


double foo(double a){
    a*=63240;
    return a;
}
