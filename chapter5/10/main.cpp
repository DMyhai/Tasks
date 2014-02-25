#include <iostream>



using namespace std;

int main()
{
    int n, iter;
    cout<<"Enter the quantity of lines: ";
    cin>>n;
    iter = n - 1;

    for (int i = 0; i < n; i++){
        for (int a=0; a < n; a++){
            if (a < iter){
                cout<<".";
            }else {
                cout<<"*";
            }
        }
        iter--;
        cout<<endl;
    }

    return 0;
}


