#include <iostream>
#include <new>
#include <string.h>


using namespace std;


struct chaff {
 char dross[20];
 int slag;
};



int main()
{
char str[] = "Old value";
const int N=3;
const int SIZE = sizeof(chaff)*N;
char buffer[SIZE];


//int *buffer = new int [2* sizeof(chaff) ];




chaff *p = new (buffer)chaff [N];

//new(buffer)chaff;
//new( buffer+sizeof(chaff)) chaff;



cout<<"Enter your values: "<<endl;
int i=0;
for ( ; i<2; i++ ){
    cout<<"Dross: ";
    cin.getline(((chaff *)(buffer+sizeof(chaff) *i))->dross, 20);
    cout<<"Slag: ";
    cin>>((chaff *)(buffer+sizeof(chaff)*i))->slag;
    cin.get();
}

strcpy(((chaff*)(buffer+sizeof(chaff)*i))->dross  ,str);
((chaff*)(buffer+sizeof(chaff)*i))->slag = 9;


cout<<"Your value: ";
for (int i=0; i<3; i++){
    cout<<"Dross: "<<p[i].dross<<endl
        <<"Slag: "<<p[i].slag<<endl;
}


    //delete [] p;

    return 0;
}
