#include <iostream>

struct Employee
{
    int id{};
    int age{};
    double wage{};
};

int main()
{
    Employee Ivan{ 1, 18, 65000.0 };

    ++Ivan.age;
    Ivan.wage = 68000.0;

    Employee* ptr{ &Ivan };
    //std::cout << {*ptr}.age << '\n'; // Không tuyệt vời nhưng hiệu quả: Đầu tiên hủy tham chiếu ptr, sau đó sử dụng lựa chọn thành viên
    std::cout << ptr->id << '\n'; //sử dụng -> để chỉ thành viên từ con trỏ đến đối tượng
    return 0;
}
