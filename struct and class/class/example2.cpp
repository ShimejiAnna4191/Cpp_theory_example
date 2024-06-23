#include <iostream>

class MemberID
{
    private:
        int m_id {};
    public:
    MemberID (int id) //constructors must have the same alias as the class
        : m_id {id}
    {
        std::cout<<"piro id" <<m_id<<" is destructor here"<<'/n'; 
    }
    ~MemberID() //The destructor takes no arguments so you don't need to create parameters here
    {
        std::cout<<"piro id" <<m_id<<" is destructor here";
    }
    // int getID() const{
    //     return m_id;
    // }
};
int main(){
    MemberID Piroid1 {18};
    {
        MemberID Piroid2 {21};
    }
    return 0;
}
