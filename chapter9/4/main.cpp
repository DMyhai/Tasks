#include <iostream>
#include "sales.h"

using namespace std;

int main()
{
    SALES::Sales sale;
    SALES::Sales sale1;

    int i = 0;
    double ar[4];
    std::cout<< "Enter four values of income (q - quit, max - 4 values): ";
    while (std::cin>>ar[i] && i < 4){
        i++;
    }
    std::cin.clear();
    std::cin.get();


    SALES::setSales(sale, ar, i);
    SALES::setSales(sale1);

    SALES::showSales(sale);
    SALES::showSales(sale1);




    return 0;
}
