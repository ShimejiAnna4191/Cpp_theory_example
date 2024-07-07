#include <iomanip> // for std::boolalpha
#include <iostream>

int main(){
    int arr[5] {2,4,6,5,8}; //mảng có phần tử kiểu int
    
    // Đầu tiên, hãy chứng minh rằng arr phân rã thành con trỏ int*

    auto ptr{arr}; //mảng bị phân rã ở đây, kiểu loại trừ sẽ suy ra loại int*
    std::cout<<std::boolalpha<<(typeid(ptr) == typeid (int*))<<'\n';
    std::cout<<std::boolalpha<<(typeid(ptr) == typeid (int))<<'\n'; //yes, loại int* ,éo phải int

    // Bây giờ hãy chứng minh rằng con trỏ chứa địa chỉ của phần tử đầu tiên của mảng
    std::cout<<std::boolalpha<<(&ptr[0] == arr);
    return 0;
}

//Thông tin loại của một mảng và một mảng phân rã là khác nhau. 
//Trong ví dụ trên, mảng arr có loại int[5], trong khi mảng phân rã có loại int*. 
//Đáng chú ý, loại mảng int[5] chứa thông tin độ dài, trong khi loại con trỏ mảng phân rã int* không.

//điều có nghĩa là mảng phân ra sẽ làm mất đi độ dài của mảng và biến thành con trỏ (người ta gọi đây là phân rã)
//hay nói chính xác hơn là con trỏ không biết độ dài của mảng nên không trả trả về mảng int*[5] được
