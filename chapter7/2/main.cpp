#include <iostream>

using namespace std;

void output_of_num(double [], int );
int input(double[], int max );
double average(double [], int );

void aver_output(double);



int main()
{
    int size=0;
    int max = 10;
    double p_golf [max];
    cout<<"Enter you number: ";
    size = input(p_golf, max);
    output_of_num(p_golf, size);
    aver_output(average(p_golf , size));
    return 0;
}

void output_of_num(double p_golf[] , int i ){
    cout<<"Series of numers: "<<endl;
    for (int a=0; a<i; a++){
        cout<< p_golf[a];
    }
    cout<<endl;
}

int input(double p_golf[], int max ){
    int i = 0;

    while ( i<max && cin>>p_golf[i]){
        i++;
    }
    return i;
}

double average(double p_golf[], int i){
    double aver=0;
    for (int a=0; a < i; a++){
        aver += p_golf[a];
    }
    aver/=i;
    return aver;

 }

void aver_output (double aver){
    cout<<"Average value is: "<<endl
        <<aver<<endl;

}
