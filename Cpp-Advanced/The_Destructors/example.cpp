#include <iostream>
#include <cassert>
#include <cstddef>

class IntArray
{
    private:
    int* m_array{};
    int m_length{};
    public:
    IntArray(int length)
    {
        assert (length > 0);

        m_array = new int[static_cast<std::size_t>(length)]{};
        m_length = length;
    }

    ~IntArray()
    {
        delete[] m_array;
    }

    void SetValue(int value, int index)
    {
        m_array[index] = value;
    }

    int GetValue(int index)
    {
        return m_array[index];
    }

    int GetLength()
    {
        return m_length;
    }
};

int main(){
    IntArray arr (10);

    for (int count = {0}; count < arr.GetLength(); count++)
    {
        arr.SetValue(count, count+1);
    }
    std::cout<<"The value of element 4 is: "<<arr.GetValue(4)<<"\n";

    return 0;
}// arr is destroyed here, so the ~IntArray() destructor function is called here
