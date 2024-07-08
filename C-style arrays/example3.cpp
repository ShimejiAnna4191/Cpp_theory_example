#include <iostream>

int main(){
    int number[] {1,3,2,6,4};
    char chr[] {"hello"};
    const char name[] {"Yoimiya"};

    //tất cả mảng dưới đây bị phân rã thành kiểu con trỏ
    std::cout<<number<<"\n"; //kì lạ thay mảng int in dưới dang địa chỉ trong khi mảng char in dưới dạng chuỗi
    std::cout<<chr<<"\n";
    std::cout<<name<<"\n";
    
    std::cout<<static_cast<const void*>(name)<<"\n"; 
    // không thể in con trỏ char dưới dạng địa chỉ bằng cách thông thường (&name), ta sẽ in bằng cách `static_cast<const void*>(name)`
    return 0;
}

// int main()
// {
//     char c{ 'Q' };
//     std::cout << &c; //hành vi không xác định do kiểu chả không thể bị chấm dứt

//     return 0;
// }
