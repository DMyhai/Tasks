#include <iostream>


using namespace std;

struct bop {
    char fullname[20]; // ім"я
    char title[20];   // посада
    char bopname[20]; // cекретне ім"я БОП
    int preference;        // 0 повне ім"я, 1 - титул, 2 - ім"я боп;

};


int main()
{
    int n_staff;
    char choice;
    cout<<"Enter quantity of staff: ";
    cin>>n_staff;
    cin.get();
    bop *pointer_bop = new bop [n_staff];

    for (int i=0; i < n_staff; i++){
        cout<<"Enter information of programers number  "<<i+1<<endl
            <<"Enter fullname: ";
        cin.getline(pointer_bop[i].fullname, 20);
        cout<<"Enter title: ";
        cin.getline(pointer_bop[i].title, 20);
        cout<<"Enter bopname: ";
        cin.getline(pointer_bop[i].bopname, 20);
        cout<<"Enter preference: ";
        cin>>pointer_bop[i].preference;
        cin.get();
    }

    cout<<"Report of  programer charity opder:  "<<endl
        <<"a. display by name "<<"b. display by title "<<endl
        <<"c. display by PCO  "<<"d. displey by preference"<<endl
        <<"q. logout "<<endl;


    while(choice != 'q'){
        cout<<"Your choice: ";
        cin>>choice;
        cin.get();
        switch(choice){
            case 'a':
                for (int i=0; i < n_staff; i++){
                    cout<< pointer_bop[i].fullname<<endl;
                }
                break;
            case 'b':
                for (int i=0; i<n_staff; i++){
                    cout<<pointer_bop[i].title<<endl;
                }
                break;
            case 'c':
                for (int i=0; i<n_staff; i++){
                    cout<<pointer_bop[i].bopname<<endl;
                }
                break;
            case 'd':
                for (int i=0; i<n_staff; i++){
                    if ( pointer_bop[i].preference == 0 ){
                        cout<<pointer_bop[i].fullname<<endl;
                    }else if (pointer_bop[i].preference == 1 ){
                        cout<<pointer_bop[i].title<<endl;
                    }else if (pointer_bop[i].preference == 2){
                        cout<<pointer_bop[i].bopname;
                    }
                }
                break;
            case 'q':
                cout<<"Bye";
                break;

        }
    //cout<<"Next choice: "<<endl;
    }

delete[] pointer_bop;

    return 0;
}
