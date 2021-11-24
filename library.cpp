#include <iostream>

template <typename T>
void swapValue(T &a, T &b)
{
    T temp = a;
    a = b;
    b = temp;
}

template <typename T>
int length0(T array[])
{
    int arraySize = sizeof(array) / sizeof(array[0]);
    return arraySize;
}

template <typename T>
int length1(T array[])
{
    int count = 0;
    for (auto item : array) // iterate array or list
    {
        count++;
    }
    return count;
}

int main()
{
    int items[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    std::cout  << length0(items) << std::endl;
    std::cout << length1(items) << std::endl;

    return 0;
}
