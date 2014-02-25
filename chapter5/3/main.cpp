#include <iostream>

using namespace std;

int main()
{
    int a;
    int res = 0;
    cout<<"Enter number: ";
    while(cin>>a && a == 0){

        res += a;

        cout<<"Summ: "<<res<<endl;

    }
    return 0;
}
