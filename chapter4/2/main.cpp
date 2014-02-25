#include <iostream>
#include <string>

using namespace std;

int main()
{
    string first_name;
    string last_name;
    char deserve;
    int age;
    int temp;

    cout<<"What is your first name? ";
    getline(cin, first_name);
    //cin >> first_name;
    cout<<"What is your last name ? ";
    cin >> last_name;
    cout<<"What is your deserve ? ";
    cin>>deserve;
    temp = (int)deserve;
    temp += 1;
    deserve = (char)temp;
    cout<<"What is your age ? ";
    cin>>age;
    cout <<"Name: "     <<last_name <<", "<<first_name<<endl
         <<"Grade: "    <<deserve   <<endl
         <<"Age: "      <<age       <<endl;
    return 0;
}
