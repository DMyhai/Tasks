#include <iostream>


using namespace std;
double add (double x, double y );
double calculate(double, double, double (*)(double, double));
double multi (double , double );
double difference(double, double );

int main()
{
    double x, y;
    int i=0;
    const int size = 3;
    cout<<"Enter a couple of numbers"<<endl;


    //while ( cin>>x && cin>>y ){

       // cout<<"Sum is equal: "<<calculate(x, y , add)<<endl
          //  <<"Multiplection is equal: "<<calculate(x, y , multi)<<endl;

    //}

    double (*pf[size])(double, double) = {add, multi, difference};



        while  (cin>> x && cin>>y ) {
            for (int i=0; i< 3; i++){
                switch (i){
                case 0:
                    cout<<"Sum is equal: "<<endl;
                    cout<< calculate(x, y, pf[i]) <<endl;
                    break;
                case 1:
                    cout<<"Multiplexing is equal: "<<endl;
                    cout<< calculate(x, y, pf[i]) <<endl;
                    break;
                case 2:
                    cout<<"Difference is equal: "<<endl;
                    cout<< calculate(x, y, pf[i]) <<endl;
                    break;
                }

            }

        }

    return 0;
}


double add (double x, double y ){
    return x+y;
}

double calculate(double x, double y, double (*p)(double, double) ){

     return p(x,y) ;
}

double multi (double x, double y ){
    return x*y;

}

double difference(double x, double y ){
    if (x>y){
        return x-y;
    }else {
        return y-x;
    }

}
