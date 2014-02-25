#include <iostream>

using namespace std;

int foo (int a){
a*=1.8;
a+=32;
return a;
}

int main()
{
    int a;
    cout <<"Please enter a Celsius value: ";
    cin >>a;
    cout<<a<<" degree Celsius is "<< foo(a)<<" degrees Fahrenheit"<<endl;
    return 0;
}
