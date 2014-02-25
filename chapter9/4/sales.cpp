#include <string.h>
#include "sales.h"
#include <iostream>

namespace SALES
{
    void setSales(Sales & s, const double ar[], int n){
        int max_size = 4;
        int i = 0;
        double min, max;
        double average = 0;


        min = ar[i];
        max = ar[i];
        for (int a = 0; a < n; a++){
            s.sales[a] = ar[a];
        }
        for ( ; i < n; i++ ){
            if (min > ar[i])
                min = ar[i];
            if (max < ar[i])
                max = ar[i];
            average += ar[i];
        }
        //strcpy (s.sales, ar);
        s.average = average/n;
        s.min = min;
        s.max = max;

        for (int b = n ; b < max_size; b++ ){
            s.sales[b] = 0;
        }
    }

    void setSales(Sales & s){
        int i = 0 ;
        s.average = 0;
        while (i < 4){
            std::cout<<"Enter values of income in "<<i+1<<" quarter: ";
            std::cin>>s.sales[i];
            if (i == 0){
                s.max = s.sales[i];
                s.min = s.sales[i];
            }
            if (!s.sales[i]){
                std::cout<<"You enter non numeric sign!";
                break;
            }
            s.average += s.sales[i];
            if (s.min > s.sales[i])
                s.min = s.sales[i];
            if (s.max < s.sales[i])
                s.max = s.sales[i];
            i++;
        }
        s.average /= i;
    }


    void showSales(const Sales & s){
       for (int i=0;  i<SALES::QUARTERS; i++ )
            std::cout<<"Incomes per qurter number: "<<i+1<<" = "<<s.sales[i]<<std::endl;
        std::cout <<"Average: "<<s.average <<std::endl
                <<"Min: "<<s.min<<std::endl
                <<"Max: "<<s.max<<std::endl;


    }
}
