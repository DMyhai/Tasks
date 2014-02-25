#include <iostream>
#include <math.h>

using namespace std;

const int CONVERT = 12;

int main()
{

    double foot, inch, pound, hight, weight, BMI;


    cout<<"Enter your hight in foot: ";
    cin>>foot;
    cout<< "Enter your hight in inch: ";
    cin>>inch;
    cout<<"Enter your weight in pound: ";
    cin>>pound;

    hight = (foot*CONVERT) + inch;
    hight*=0.0254;
    weight = pound/2.2;
    BMI =  weight/(pow(hight,2));
    cout<<"Index BMI = "<< BMI <<endl;


    return 0;
}
