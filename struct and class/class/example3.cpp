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
// Đây là hướng dẫn suy luận cho number_money của chúng ta
// Ghép các đối tượng được khởi tạo với các đối số kiểu T và T sẽ suy ra number_money<T>
template <typename T> // để có thể định nghĩa kiểu cho mẫu thì cần phải đặt ra ngoài class
    number_money(T, T) -> number_money<T>; //chuyển đổi suy luận kiểu sao cho T và T suy ra <T> (lưu ý cần phải định nghĩa kiểu trước khi làm điều này)


int main(){
    number_money<int> Anna{12, 32}; //đặt kiểu int cho mẫu
    std::cout<< Anna.wallet1 <<' '<<Anna.wallet2<<'\n'; //in Anna ví 1 và ví 2 ra màn hình 
    number_money<double> Ivan{1.5, 5.3}; //đặt kiểu double cho mẫu
    std::cout<< Ivan.wallet1 <<' '<<Ivan.wallet2<<'\n';
    number_money<long int> Piro{43132, 32431}; //đặt kiểu double cho mẫu
    std::cout<< Piro.wallet1 <<' '<<Piro.wallet2<<'\n';
    return 0;
}
