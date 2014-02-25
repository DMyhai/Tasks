#include <iostream>
#include <ctype.h>


using namespace std;



int main()
{
int i=0;
char a[20];
cout<<"Enter your line: ";
cin.getline(a, 20);
cout<<"You entered next alphas: ";

//for (int i=0; i<256; i++){
  //  cout<< i<< (char)i<<endl;
//}


while (a[i] != '@'){
    if ( isalpha(a[i])){
        if (islower(a[i]))
        cout<<char((int)a[i] - 32);
        else { cout<<a[i]; }
    }
i++;
}




    return 0;
}
