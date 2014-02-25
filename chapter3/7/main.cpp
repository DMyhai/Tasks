#include <iostream>

using namespace std;

int main()
{
    double consum_eu, consum_us;
    double distance_eu, distance_us;
    cout << " Enter the consumption of fuel ";
    cin >> consum_eu;
    distance_eu = 100;
    distance_us = distance_eu * 0.6214;
    consum_us = consum_eu/3.875;
    distance_us /= consum_us;

    cout<<"consumption in europe l/km " << consum_eu << "/"<< distance_eu <<" = "<<" distance in m/g: "<<distance_us<<"/"<< 1 <<endl;
    return 0;
}
