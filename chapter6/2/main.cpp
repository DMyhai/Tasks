#include <iostream>



using namespace std;

bool is_double(double);

int main()
{
    int i=0;
    double donat[10];
    double aver = 0;
    int quantity=0;
    cout<<"Enter your offerings :";
    while(i < 10 && cin>>donat[i] ){
        aver += donat[i];
        i++;

    }

    cout<<aver<<endl;
    aver = aver/i;
    if (i != 0){
        cout<<"Averange value is: " << aver <<endl;
        cout<<"Values bigger then averange: "<<endl;
        for (int a=0; a < i; a++){
            if (donat[a] > aver){
                cout<<donat[a]<<" "<<endl;
                quantity++;
            }
        }
            cout <<"Qantity of values wich bigger then averange: "<<quantity<<endl;
    }else {
        cout<<"You enterted wrong value! "<<endl;
    }
    return 0;
}



