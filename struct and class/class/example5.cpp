#include <iostream>

// class GeneralD
// {
//     private:
//         int m_memberID{};
//     public:
//         GeneralD (int memberID) : m_memberID{memberID} //không cần toán tử bằng với thành viên sao ch
//     {
//     }
//     int inc_memberID(){
//         return m_memberID++;
//     }
// };

// int main(){
//     GeneralD member1{1};
//     for (int i = 0; i < 5; i++)
//     {
//         std::cout<<member1.inc_memberID();
//     }
//     return 0;
// }
class GeneralD
{
    private:
        int m_memberID{};
    public:
        GeneralD (int memberID) : m_memberID{memberID} //không cần toán tử bằng với thành viên sao ch
    {
    }
    int inc_memberID();
};
int GeneralD::inc_memberID(){
    return m_memberID++;
}

int main(){
    GeneralD member1{1};
    for (int i = 0; i < 5; i++)
    {
        std::cout<<member1.inc_memberID();
    }
    return 0;
}
