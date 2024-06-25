#include <iostream>
#include <ios> // std::boolalpha

template <typename T>
class Pair{
private:
    T m_number1 {};
    T m_number2 {};
public:
    Pair(const T& number1, const T& number2) //do not put () before the copy (constructor) parameters
    :m_number1 {number1}
    ,m_number2 {number2}
    {
    }
    //we will call the is_fair function here to turn the is_fair function from an outer member function into a member function
    bool is_fair(const Pair<T>& pair);
};
// When we define a member function outside the class definition,
// we need to provide the template parameter declaration again (or more simply, provide the template again).
template <typename T>
bool Pair<T>::is_fair(const Pair<T>& pair){ //thêm Pair<T> ở đây để có thể định nghĩa kiểu
    return pair.m_number1 && pair.m_number1==pair.m_number2 &&pair.m_number2;
}

int main(){
    Pair Case1 {3, 5}; //use CTAD to infer the type of Pair<int>
    std::cout<<std::boolalpha<< "is 3 and 6 fair? "<< Case1.is_fair(Pair {3, 6})<<'\n';
    std::cout<<std::boolalpha<< "is 4 and 4 fair? "<< Case1.is_fair(Pair {4, 4})<<'\n';
    return 0;
}
