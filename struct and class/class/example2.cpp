#include <iostream>

class MemberID
{
    private:
        int m_id {};
    public:
    MemberID (int id)
        : m_id {id}
    {
        std::cout<<"piro id" <<m_id<<" is destructor here"<<'/n';
    }
    ~MemberID() 
    {
        std::cout<<"piro id" <<m_id<<" is destructor here";
    }
    int getID() const{
        return m_id;
    }
};
int main(){
    MemberID Piroid1 {18};
    {
        MemberID Piroid2 {21};
    }
    return 0;
}
