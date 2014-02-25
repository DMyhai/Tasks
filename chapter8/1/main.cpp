#include <iostream>
#include <string>

using namespace std;

void  show_line(string *p , int number = 1);





int main()

{
    string line = "Vaza is writing programs ";

    show_line (&line);
    show_line (&line);
    show_line (&line);
    show_line (&line, 0);

    return 0;
}


void show_line(string *p , int number ){
    static int iterator=0;
    if (number != 0 && iterator !=0 ){
        number = iterator;
        cout<< "You called this function "<< iterator<<" times before last one! "<<endl;
    }
    for (int i = 0; i < number; i++){
        cout<< "You entered line: "<<*(p)<<endl;
        iterator++;

    }


}
