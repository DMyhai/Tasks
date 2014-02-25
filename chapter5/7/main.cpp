#include <iostream>

using namespace std;

struct car {
    char name_of_car[20];
    int year;
};

int main()
{
    int n;
    cout << " Enter number of car: ";
    cin >> n;
    car *p_car = new car [n];

    for (int i = 0; i < n; i++){
       cout << "Enter name of car: ";
       cin.get();
       cin.getline(p_car[i].name_of_car, 20);
       cout << "Enter year of car: ";
       cin >> p_car[i].year;
    }
    cout << "Your colection: " << endl;
    for (int i = 0; i < n; i ++){
        cout << p_car[i].year <<" "<< p_car[i].name_of_car << endl;
    }


    return 0;
}
