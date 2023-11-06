#include <iostream>

template <typename T>

class DynamicArray
{
    size_t m_size;
    T *m_arr;

public:
    DynamicArray(size_t size)
        : m_size(size), m_arr(new T[size])
    {
        std::cout << "Constructor" << std::endl;
    }

    ~DynamicArray()
    {
        std::cout << "Destructor" << std::endl;
        delete[] m_arr;
    }

    T get(size_t index) const
    {
        return m_arr[index];
    }

    void set(size_t index, T val)
    {
        m_arr[index] = val;
    }

    void print() const
    {
        for (size_t i = 0; i < m_size; i++)
        {
            std::cout << i << " " << m_arr[i] << " " << std::endl;
        }
    }
};

int main(int argc, char *argv[])
{
    DynamicArray<int> randomArray(3);

    randomArray.set(2, 2);
    randomArray.set(1, 1);

    randomArray.print();

    return 0;
}