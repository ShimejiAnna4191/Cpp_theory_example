#include <array>
#include <iostream>
#include <functional>

template <typename T, std::size_t Row, std::size_t Col> 
using ArrFlat2D = std::array<T, Row * Col>;

template <typename T, std::size_t Row, std::size_t Col> 
class ArrayView2D
{
    private: 
        std::reference_wrapper<ArrFlat2D<T, Row, Col>> m_arr{};
    public:
        ArrayView2D(ArrFlat2D<T, Row, Col> &arr)
            :m_arr {arr}
        {}

        T& operator[](int i){
            return m_arr.get()[static_cast<std::size_t>(i)];
            }

        const T& operator[](int i) const {
            return m_arr.get()[static_cast<std::size_t>(i)];
            }

        T& operator()(int row, int col){
            return m_arr.get()[static_cast<std::size_t>(row * countCol() + col)];
        }
        const T& operator()(int row, int col) const{
            return m_arr.get()[static_cast<std::size_t>(row * countCol() + col)];
        }
        int countRow() const{
            return static_cast<int>(Row);
        }
        int countCol() const{
            return static_cast<int>(Col);
        }
        int countLength() const{
            return static_cast<int>(Row * Col);
        }
};

int main(){
    ArrFlat2D<int, 3, 4> arr{
        1 , 2, 3, 4,
        5, 6, 7, 8,
        9, 10, 11, 12
    };

    ArrayView2D<int, 3, 4> arrView{arr};

    std::cout<< "Row: "<<arrView.countRow() <<"\n";
    std::cout<< "Cols: "<<arrView.countCol()<< "\n";

    for (int i = 0; i < arrView.countLength(); i++)
    {
        std::cout<<arrView[i]<<' ';
    }
    std::cout<< "\n";

    for (int row = 0; row < arrView.countRow() ; row++)
    {
        for (int col = 0; col < arrView.countCol(); col++)
        {
            std::cout<<arrView(row, col)<<' ';
        }
        std::cout<< "\n";
    }
    std::cout<< "\n";
    return 0;
}
