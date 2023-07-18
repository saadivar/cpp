#include <iostream>
#include "Array.hpp"



#define MAX_VAL 750

int main()
{
    // Array<int> numbers(MAX_VAL);
    // int* mirror = new int[MAX_VAL];
    // numbers.size();
    // srand(time(NULL));
    // for (int i = 0; i < MAX_VAL; i++)
    // {
    //     const int value = rand();
    //     numbers[i] = value;
    //     mirror[i] = value;
    // }
    // //SCOPE
    // {
    //     Array<int> tmp = numbers;
    //     Array<int> test(tmp);
    // }

    // for (int i = 0; i < MAX_VAL; i++)
    // {
    //     if (mirror[i] != numbers[i])
    //     {
    //         std::cerr << "didn't save the same value!!" << std::endl;
    //         return 1;
    //     }
    // }
    // try
    // {
    //     numbers[-2] = 0;
    // }
    // catch(const std::exception& e)
    // {
    //     std::cerr << e.what() << '\n';
    // }
    // try
    // {
    //     numbers[MAX_VAL] = 0;
    // }
    // catch(const std::exception& e)
    // {
    //     std::cerr << e.what() << '\n';
    // }

    // for (int i = 0; i < MAX_VAL; i++)
    // {
    //     numbers[i] = rand();
    // }
    // delete [] mirror;//
    // std::cout << "--------------------------------" <<std::endl;
    try
    {
        Array<const int> arr(50);
        for (int i = 0; i < 50 ;i++)
            std::cout <<arr[i] <<std::endl;
        // Array<int>arr1(10);
        // arr1 = arr;
        // std::cout << arr[15] << std::endl;
        // std::cout << arr1[15] << std::endl;
        // {
        //     Array<int> arr2(100);
        //     arr2 = arr1;
        //     std::cout << arr1[49] << std::endl;
        //     std::cout << arr2[49] << std::endl;
        //     std::cout << arr2[50] << std::endl;
        // }
    }
        catch(std::exception& e)
    {
        std::cout <<e.what()<<std::endl;
    }
    try
    {
        Array<std::string> arr(50);
        for (int i = 0; i < 50 ;i++)
            arr[i] = "saad";
        Array<std::string>arr1(10);
        arr1 = arr;
        std::cout << arr[15] << std::endl;
        std::cout << arr1[15] << std::endl;
    }
        catch(std::exception& e)
    {
        std::cout <<e.what()<<std::endl;
    }
    return 0;
}

