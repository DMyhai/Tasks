#include <iostream>

using namespace std;

int main()
{
    int n1, n2;
    int res=0;
    cout<<"Enter first number: ";
    cin>>n1;
    cout<<"Enter second number: ";
    cin>>n2;

    for (int i = n1; i <= n2; i++){
        res+=i;
    }
    cout<<"Result, summ is: "<<res<<endl;


    return 0;
}
