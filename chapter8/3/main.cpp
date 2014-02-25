#include <iostream>
#include <string>
#include <cstring>
#include <stdio.h>


using namespace std;

void to_upper(string &p);

int main()
{
    string str;
    cout<<"Enter your line (q - finish) : ";
    getline(cin, str);
        while (!str.empty() && str[0] != 'q'){
            to_upper(str);
            cout<<"Enter your line(q - finish): ";
            getline(cin, str);
    }
    cout<<"Bye"<<endl;

    return 0;
}


void to_upper(string &p){
    for (int i = 0; i < p.length();i++ ){
        putchar(toupper( p[i]));
    }
    cout<<endl;
}
