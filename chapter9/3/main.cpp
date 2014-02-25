#include <iostream>

int add (int a, int b){
return a+b;

}


 namespace vaza {

int foo (int , int);


}

 namespace petya {

int foo (int, int);

}

int main()
{



    std::cout<<vaza::foo(2,3)<< std::endl;
    std::cout<<petya::foo(2,3)<<std::endl;

   // int cout;

  // auto a=add;
//cout<<(*a)(1,2)<<endl;

    return 0;
}


namespace vaza{

    int foo (int a, int b){
        return a+b;
    }
}

 namespace petya {

int foo (int a, int b){
    return a*b;
}

}

