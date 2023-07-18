#pragma once
#include <iostream>

template <typename T1, typename T2>
void iter(T1 * arr, int len, T2 func)
{
    for (int i = 0;i < len ; i++)
        func(arr[i]);
}

template <typename T>
void printing(T& a) {
    std::cout << a <<std::endl;
}
