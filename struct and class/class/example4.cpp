#include <iostream>
#include <ios> // std::boolalpha

template <typename T>
class Pair{
private:
    T m_number1 {};
    T m_number2 {};
public:
    Pair(const T& number1, const T& number2) //không được đặt () trước tham số của bản sao (constructor)
    :m_number1 {number1}
    ,m_number2 {number2}
    {
    }
    //chúng ta sẽ gọi hàm is_fair ở đây để biến hàm is_fair từ hàm bên ngoài thành viên thành hàm thành viên
    bool is_fair(const Pair<T>& pair);
};
// Khi chúng ta định nghĩa một hàm thành viên ngoài định nghĩa lớp,
// chúng ta cần cung cấp lại phần khai báo tham số mẫu (hay nói đơn giản hon là cung cấp lại mẫu)
template <typename T>
bool Pair<T>::is_fair(const Pair<T>& pair){ //thêm Pair<T> ở đây để có thể định nghĩa kiểu
    return pair.m_number1 && pair.m_number1==pair.m_number2 &&pair.m_number2;
}

int main(){
    Pair Case1 {3, 5}; //sử dụng CTAD để suy ra loại Pair<int>
    std::cout<<std::boolalpha<< "is 3 and 6 fair? "<< Case1.is_fair(Pair {3, 6})<<'\n';
    std::cout<<std::boolalpha<< "is 4 and 4 fair? "<< Case1.is_fair(Pair {4, 4})<<'\n';
    return 0;
}
