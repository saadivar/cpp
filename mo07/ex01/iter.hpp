#pragma once
#include <iostream>

template <typename T1,typename T2,typename T3>
void iter(T1* arr,T2 size,T3 func)
{
    for (int i = 0;i < size ; i++)
        func(arr[i]);
}