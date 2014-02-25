#include <iostream>

using namespace std;

int main()
{
    int i=0;
    char **month = new char *[15];
    for (int i=0; i<15; i++){
        month[i] = new char [15];
    }
    int income[12];
    int summ = 0;
    for (int i=0; i<12; i++){
            cout<<"Enter month: ";
            cin.get();
            cin.getline(month[i], 15);
            cout<<"Enter income: ";
            cin>>income[i];
            summ += income[i];
    }
    cout<< "Income per year: "<<summ<<endl;

    return 0;
}
