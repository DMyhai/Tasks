#include <iostream>

using namespace std;

int main()
{

    int *array = new int [5];

    cout<<"Enter first result of dash: ";
    cin>> *(array+0);

    cout<<"Enter second result of dash: ";
    cin>> *(array+1);

    cout<<"Enter therd result of dash: ";
    cin>> *(array+2);

    *(array+3) = (*(array + 0) + *(array + 1) + *(array + 2)) / 3;

    cout<<"First result is: "<< *(array+0)<<endl;
        <<"Second result is: "<< *(array+1)<<endl
        <<"Therd result is: "<< *(array+2)<<endl
        <<"Averag: "<< *(array+3)<<endl;

    return 0;
}
