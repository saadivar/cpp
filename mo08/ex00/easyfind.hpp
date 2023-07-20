#pragma once
#include <iostream>

#include <algorithm>
#include <vector>
#include <list>
template<typename T>
void easyfind(T pars,int s)
{
    if(std::find(pars.begin(),pars.end(),s) != pars.end())
    {
        std::cout << s<<std::endl;
            return ;
    }
    std::cout << "not found"<<std::endl;
}