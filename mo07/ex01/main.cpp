#include "iter.hpp"
template <typename T>
void printing(T& a)
{
    std::cout << a <<std::endl;
}
int main()
{
    int arr[] ={10,20,5,4};
    char arr1[] ={'s','a','a','d'};
    std::string strs[]={"saad","ivar","haamid"};

    iter(arr,4,printing<int>);
    iter(arr1,4,printing<char>);
    iter(strs,3,printing<std::string>);
}