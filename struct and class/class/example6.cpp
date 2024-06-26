//behold! a new key ``friend``
//Turn all functions outside the class into members of the class
#include <iostream>

class  Summation{
private: 
    int m_number {0};
public:
    void add (int number){
        m_number += number;
    }
    friend void print(Summation& summation);
};

void print(Summation& summation){ //phải có cùng kiểu với friend
    std::cout<<summation.m_number<<'\n';
}

int main(){
    Summation a{};
    a.add(5);
    print (a);
    return 0;
}
