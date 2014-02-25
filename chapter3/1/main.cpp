#include <iostream>

using namespace std;

int main()
{
    int a, b, c;
    const int convert = 12;
    cout<<"Enter value in inch_";
    cin>>a;
    b = a / convert;
    c = a - (b*convert);
    cout<<"Your value in foot_ "<< b <<" and inch_ "<< c <<endl;
    return 0;
}
