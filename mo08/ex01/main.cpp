#include "Span.hpp"

int main()
{
    try{
        Span s(19);
        std::vector<int> vec;
        std::srand(time(0));
        for (int i = 0;i < 10;i++)
            vec.push_back(std::rand() % 50000);
        s.addNumber(vec.begin(),vec.end());
        s.printvec();
        std::cout << "shortest : "<< s.shortestSpan()<<std::endl;
        std::cout << "longest : "<<s.longestSpan()<<std::endl;
        std::cout << "--------------------" << std::endl;
        Span s2(45);
        s2 = s;
        std::vector<int> vec2;
        for (int i = 0;i < 10;i++)
            vec2.push_back(std::rand() % 50000);
        s2.printvec();
        s2.addNumber(vec2.begin(),vec2.end());
        std::cout << "shortest : "<< s2.shortestSpan()<<std::endl;
        std::cout << "longest : "<<s2.longestSpan()<<std::endl;
        
    }
    catch(std::exception &e)
    {
        std::cout << e.what() <<std::endl;
    }
    

}