#include <iostream>

int main()
{
    std::string s = "HI THIS IS BRAIN";
    std::string  *stringPTR = &s;
    std::string& stringREF = s;
    std::cout << "MEM_& OF s = " << &s <<std::endl;
    std::cout << "MEM_& held by stringPTR = " << stringPTR <<std::endl;
    std::cout << "MEM_& held by stringREF = " << &stringREF <<std::endl;
    std::cout << "value OF s = " << s <<std::endl;
    std::cout << "value pointed to by stringPTR = " << *stringPTR <<std::endl;
    std::cout << "value pointed to by stringREF. = " << stringREF <<std::endl;
}