#include <iostream>
#include <string.h>

using namespace std;




//T maxn(T *a, int  n);


template <typename T>


T  maxn (T *a, int  n){
    T result = *(a+0) ;
    for (int i = 0; i < n; i++ ){
        if (a[i] > result ){
            result = a[i] ;
        }
    }
    return result;
}

template <class T1, class T2>
const char* maxn1 (T1**, T2);

template <> const char*  maxn1 <const char, int> (const char** ar , int number )
{
    int maxlen = strlen(ar[0]);
    int n;
    for (int i = 1;i< number; i++){
        if (maxlen < strlen(ar[i])){
            maxlen = strlen(ar[i]);
            n=i;
        }
 }
return ar[n];

}




int main()
{
    int arr[3] = {1,2,3};
    char arr1[4] = {'a','d','c','b' };
    double arr2[5] = {2.3, 5.5, 1.1, 4.1, 7.8};
    const char* ar[4] = {"Vasa" , "Petya" , "Kolya", "Zina"};

    cout<<"Max number in INT ARRAY: " <<maxn(arr,3 )<<endl
        <<"Max number in CHAR ARRAY: "<<maxn(arr1,4 )<<endl
        <<"Max number in DOUBLE ARRAY: "<<maxn(arr2,5 )<<endl;

    cout<< maxn1(ar , 4)<<endl;


    return 0;
}
