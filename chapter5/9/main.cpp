#include <iostream>
#include <string>


using namespace std;

int main()
{
    int i=0;
    string done = "done";
    string entering;
    cout<<"Enter your information: "<<endl;
    do
    cin>>entering;
    i++;
    while ( entering != done );



    cout<<"Enter to be completed ! You entered "<< i <<" words " << endl;

    return 0;
}
