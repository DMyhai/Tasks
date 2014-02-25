#include <iostream>
#include <string>

using namespace std;

struct info {
    char nameCompany[15];
    int diameter;
    int weight;

} ;


int main()
{

    info array[10];


    for (int i=0;  i<3; i++){
        cout<<"Enter name of the company: ";
        cin.get();
        cin.getline(array[i].nameCompany, 15);
        cout<<"Enter diameter of pizza: ";
        cin>>array[i].diameter;
        cout<<"Enter weight of pizza: ";
        cin>>array[i].weight;
       // cout<<"i= " <<i<<endl;

   }

    for (int i=0; i<3; i++){
        cout<<"Company name: "<<array[i].nameCompany<<endl;
        cout<<"Diametr: "<<array[i].diameter<<endl;
        cout<<"Weight: "<<array[i].weight<<endl;
    }

    return 0;
}
