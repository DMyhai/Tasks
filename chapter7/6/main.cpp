#include <iostream>

using namespace std;
int fill_array(double[], int );
void show_array(double[], int);
void reverse_array(double[], int);

int main()
{
    int max = 10;
    int size;
    double array [10];
    size = fill_array(array, max);
    show_array(array, size);
    reverse_array(array, size);
    show_array(array, size);
    return 0;
}


int fill_array(double array [], int max){
    int i=0;
    cout<<"Enter your numbers: "<<endl;
    while (cin>>array[i] && i < 10){
        i++;
    }
    return i;
}

void show_array(double array[], int size){
    cout<<"Contents of array: "<<endl;
    for (int i=0; i<size; i++){
        cout<<array[i];
    }
    cout<<endl;
}

void reverse_array(double array[], int size){
    double buff;
    int iter = size-1;
    int n = size/2;
    for (int i=0; i < n ; i++){
       buff = array[i];
       array[i] = array[iter];
       array[iter] = buff;
       iter --;
    }
}
