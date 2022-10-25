#include <iostream>
#include <string.h>
#include <typeinfo>

template <typename T>
void swapValue(T &a, T &b)
{
    T temp = a;
    a = b;
    b = temp;
}

template <typename T>
int length(T array[])
{
    std::string typeFull = typeid(array).name();
    std::string type = typeFull.substr(4, 4);

    array = int(array);
    int arraySize = sizeof(array) / sizeof(array[0]);
    return arraySize;
}


int main()

{
    int items[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    std::cout << typeid(items).name() << std::endl;
    std::cout << length(items) << std::endl; //zeigt auf pointer!!

    return 0;
}
