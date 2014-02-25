#include <string>
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <stdlib.h>

using namespace std;

struct patron {
    string name;
    double total;
};

int main()
{
    int qant_patron=0;
    char filename[20];
    int height_donation = 10000;
    bool f_g_patrons = 1;
    bool f_patrons = 1;


    ifstream fFile;
    cout<<"Enter name of data file: ";
    cin.getline(filename,20);
    fFile.open(filename);
    if (!fFile.is_open()){
        cout<<"Could not open the file "<<filename<<endl;
        cout<<"Program terminating";
        exit(EXIT_FAILURE);
    }
    fFile>>qant_patron;
    fFile.get();
    //cout<<fFile.end<<endl;
    patron *p_patron = new patron [qant_patron];
    for (int i=0; i < qant_patron; i++ ){
      getline (fFile, p_patron[i].name);
      fFile>>p_patron[i].total;
      fFile.get();
    }

    cout<<"Grand Patrons: "<<endl;
    for (int i=0; i<qant_patron; i++){
       if (p_patron[i].total > height_donation ){
            cout<<p_patron[i].name<<endl;
            cout<<p_patron[i].total<<endl;
            f_g_patrons==0;
        }else if (f_g_patrons == 1 && qant_patron == i+1){
            cout<<"None"<<endl;
        }
    }
    cout<<"Patrons: "<<endl;
    for (int i=0; i<qant_patron; i++){
       if (p_patron[i].total < height_donation ){
            cout<<p_patron[i].name<<endl;
            cout<<p_patron[i].total<<endl;
            f_patrons==0;
        } else if ( f_patrons == 1 && qant_patron == i+1){
            cout<<"None"<<endl;
        }
    }

    delete[] p_patron;
    return 0;
}





