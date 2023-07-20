#pragma once
#include <iostream>
#include <algorithm>
#include <vector>
#include <list>
#include <stack>
template<typename T,typename underc = std::deque<T> >
class MutantStack : public std::stack<T,underc>
{
    public:
    MutantStack(){}
    MutantStack(const MutantStack& rh){*this = rh;}
    MutantStack& operator=(const MutantStack& rh)
    {
        std::stack<T,underc>::operator=(rh);
        return *this;
    }
    ~MutantStack(){}
    typedef typename underc::iterator iterator;
    iterator begin()
    {
        return (this->c.begin());
    }
    iterator end()
    {
        return (this->c.end());
    }
};