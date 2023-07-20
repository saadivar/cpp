#include "Span.hpp"
Span::Span(){};
Span::Span(const Span &rh)
{
    *this = rh;
}
Span &Span::operator=(const Span &rh)
{
    this->ind = rh.ind;
    this->container = rh.container;
    return *this;
}
Span::~Span(){}
Span::Span(unsigned int n): ind(n)
{
}
void Span::addNumber(int a)
{
    if(container.size() == ind)
        throw out();
    else
        container.push_back(a);
}
void Span::addNumber(std::vector<int>::iterator begin,std::vector<int>::iterator end)
{
    
    int len = std::distance(begin,end);
    if(container.size() + len > ind)
        throw emp(); 
    else
        container.insert(container.end(),begin,end);


}
int Span::longestSpan()
{
    if(container.size() < 2)
        throw emp();
    std::vector<int>::iterator max ;
    std::vector<int>::iterator min ;
    max = std::max_element(container.begin(),container.end());
    min = std::min_element(container.begin(),container.end());
    return (*max - *min);
}
int Span::shortestSpan()
{
    if(container.size() < 2)
        throw emp();
    std::vector<int> tmp = container;
    std::sort(tmp.begin(),tmp.end());
    int min = INT_MAX;
    for(std::vector<int>::iterator it = tmp.begin(); it != tmp.end();it++)
    {
        
        for(std::vector<int>::iterator it1 = tmp.begin(); it1 != tmp.end();it1++)
        {
            
            if((&(*it) != &(*it1)) &&  abs(*it - *it1) < min)
            {
                min = abs(*it - *it1);
            }
        }
    }
    return min;
    
}

const char *Span::out::what() const throw()
{
    return "full vector";
}

const char *Span::emp::what() const throw()
{
    return "not enough";
}

void Span::printvec()
{
    for(std::vector<int>::iterator it = container.begin();it != container.end();it++)
        std::cout << *it <<std::endl;
}