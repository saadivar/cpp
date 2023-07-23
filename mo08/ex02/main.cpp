#include "MutantStack.hpp"



int main()
{
    MutantStack<int , std::vector<int> > vec;
    vec.push(5);
    vec.push(17);
    std::cout << vec.top() << std::endl;
    vec.pop();
    std::cout << vec.size() << std::endl;
    vec.push(3);
    vec.push(5);
    vec.push(737);
    vec.push(0);
    for(MutantStack<int, std::vector<int> >::iterator it = vec.begin();it != vec.end();  it++)
        std::cout <<*it << std::endl;
    std::cout <<"----------------------------" <<std::endl;

    MutantStack<int> mstack;
    mstack.push(5);
    mstack.push(17);
    std::cout << mstack.top() << std::endl;
    mstack.pop();
    std::cout << mstack.size() << std::endl;
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    mstack.push(0);
    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    ++it;
    it--;
    while (it != ite)
    {
        std::cout << *it << std::endl;
        ++it;
    }
    std::stack<int> s(mstack);
    std::cout <<"----------------------------" <<std::endl;
    
    std::list<int> mlist;
    mlist.push_back(5);
    mlist.push_back(17);
    std::cout << mlist.back() << std::endl;
    mlist.pop_back();
    std::cout << mlist.size() << std::endl;
    mlist.push_back(3);
    mlist.push_back(5);
    mlist.push_back(737);
    mlist.push_back(0);
    std::list<int>::iterator it1 = mlist.begin();
    std::list<int>::iterator ite1 = mlist.end();
    ++it1;
    --it1;
    while (it1 != ite1)
    {
        std::cout << *it1 << std::endl;
        ++it1;
    }
    std::stack<int, std::list<int> > s1(mlist);
    
    
    return 0;
}