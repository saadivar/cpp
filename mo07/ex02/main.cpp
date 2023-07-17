#include <iostream>
#include "Array.hpp"


template <typename T,T2 size>
void fill(T* arr,int len)
{
    for (int i = 0;i < size ;i++)
        arr[i] = i;
}
int main()
{
    try
    {
        Array<int> arr(50);
        fill(arr,50);
        std::cout << arr[4] << std::endl;
    }
    catch(std::exception& e)
    {
        std::cout <<e.what()<<std::endl;
    }
}

