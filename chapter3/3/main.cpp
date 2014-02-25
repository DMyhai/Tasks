#include <iostream>

using namespace std;

int main()
{
    double degree, minutes, seconds;
    double deg, sec, min;
    cout<<"Enter a latitude in degree, minutes, and seconds"<<endl;
    cout<<"First, enter the degree: ";
    cin>>degree;
    cout<<"Next, enter the minutes of arc: ";
    cin>>minutes;
    cout<<"Finally, enter the minutes of arc: ";
    cin>>seconds;
    sec = seconds;
    min = minutes;
    sec/=60*60;
    min/=60;
    deg = degree + min+ sec;
    cout<<degree<<" degree, "<<minutes<<" minutes, "<<seconds<<" seconds= "<<deg;



    return 0;
}
