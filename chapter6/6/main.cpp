#include <iostream>
#include <string>

using namespace std;

struct patron {
string name;
double total;
};

int main()
{
    int qant_patron;
    int height_donation = 10000;
    bool f_g_patrons = 1;
    bool f_patrons = 1;

    cout<<"Enter quantity of patrons: ";
    cin>>qant_patron;
    cin.get();
    patron *p_patron = new patron [qant_patron];
    for (int i=0; i<qant_patron; i++){
        cout<<"Enter data of patron number"<<i+1<<endl
            <<"Enter the name: ";
        getline(cin, p_patron[i].name);
        cout<<"Enter donation: ";
        cin>>p_patron[i].total;
        cin.get();
    }
    cout<<endl
        <<"Grand Patrons: "<<endl;
    for (int i=0; i<qant_patron; i++){
       if (p_patron[i].total > height_donation ){
            cout<<p_patron[i].name<<endl;
            cout<<p_patron[i].total<<endl;
            f_g_patrons = 0;
        }else if (f_g_patrons == 1 && qant_patron == i+1){
            cout<<"None"<<endl;
        }
    }
    cout<<"Patrons: "<<endl;
    for (int i=0; i<qant_patron; i++){
       if (p_patron[i].total < height_donation ){
            cout<<p_patron[i].name<<endl;
            cout<<p_patron[i].total<<endl;
            f_patrons = 0;
        } else if ( f_patrons == 1 && qant_patron == i+1){
            cout<<"None"<<endl;
        }
    }

    delete[] p_patron;
    return 0;
}
