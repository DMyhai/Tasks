#include <iostream>

using namespace std;

int main()
{
    int i=0;
    string month [12];
    int income[12];
    int summ = 0;
    while(i < 12 ){
        cout<<"Enter month: ";
        cin.get();
        getline(cin, month[i]);
        cout<<"Enter income: ";
        cin>>income[i];
        summ += income[i];
        i++;
    }
    cout<< "Income per year: "<<summ<<endl;

    return 0;
}
