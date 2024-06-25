#include <iostream>

template <typename T>
class number_money
{
public:
    T wallet1 {};
    T wallet2 {};
//public:
    //number_money(T, T) -> number_money<T>; //error
};
// This is the inference guide for our number_money
// Concatenate objects initialized with arguments of type T and T will derive number_money<T>
template <typename T> // To be able to define the type for the template, it needs to be placed outside the class
    number_money(T, T) -> number_money<T>; //convert type inference so that T and T infer <T> (note the need to define the type before doing this)

int main(){
    number_money<int> Anna{12, 32}; //set int type for sample
    std::cout<< Anna.wallet1 <<' '<<Anna.wallet2<<'\n'; //print Anna wallet 1 and wallet 2 to the screen 
    number_money<double> Ivan{1.5, 5.3}; //set type double for template
    std::cout<< Ivan.wallet1 <<' '<<Ivan.wallet2<<'\n';
    number_money<long int> Piro{43132, 32431}; 
    std::cout<< Piro.wallet1 <<' '<<Piro.wallet2<<'\n';
    return 0;
}
