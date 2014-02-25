#include <iostream>

using namespace std;

void foo (int a, int b);

int main()
{
    int a,b;
    cout<<"Enter the number of hours: ";
    cin >> a;
    cout<<"Enter the nuber of minutes: ";
    cin>>b;
    foo(a,b);
    return 0;
}


void foo (int a, int b){
    cout<<"Time: "<<a<<":"<<b<<endl;

}
