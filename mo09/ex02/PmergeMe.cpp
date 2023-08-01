#include "PmergeMe.hpp"
void insertion_sort_vec(std::vector<int>& vec)
{
    int tmp;
    
    std::vector<int >::iterator it = vec.begin();
    it++;
    for(;it != vec.end();it++)
    {
        while(it != vec.begin())
        {
            tmp = *it;
            if(*it < *(it-1))
            {
                *it = *(it - 1);
                *(it - 1) = tmp;
                it--;
            }
            else
                break;
        }
        
    }
}
void merging(std::vector<int>& vec,std::vector<int>& left,std::vector<int>& right)
{
    std::vector<int>::iterator it_left= left.begin();
    std::vector<int>::iterator it_right = right.begin();
    std::vector<int>::iterator it = vec.begin();
    
    while(it_left != left.end() && it_right != right.end())
    {
        if(*it_left <= *it_right)
        {
            *it = *it_left;
            it++;
            it_left++;
        }
        else
        {
            *it = *it_right;
            it++;
            it_right++;
        }
    }
    while(it_left != left.end())
    {
        *it = *it_left;
        it++;
        it_left++;
    }
    while(it_right != right.end())
    {
        *it = *it_right;
        it++;
        it_right++;
    }
}
void mergesort(std::vector<int>& vec)
{
    std::vector<int> left;
    std::vector<int>::iterator left_begin;
    std::vector<int>::iterator right_begin;
    std::vector<int> right;
    
    if(vec.size() <= INSER)
    {
        insertion_sort_vec(vec);
        return ;
    }
    left_begin = vec.begin();
    right_begin = vec.begin() + (vec.size() / 2);
    for(;left_begin != right_begin;left_begin++)
        left.push_back(*left_begin);
    for(;right_begin != vec.end();right_begin++)
            right.push_back(*right_begin);
    mergesort(left);
    mergesort(right);
    merging(vec,left,right);

}
void insertion_sort_deq(std::deque<int>& deq)
{
    int tmp;
    
    std::deque<int >::iterator it = deq.begin();
    it++;
    for(;it != deq.end();it++)
    {
        while(it != deq.begin())
        {
            tmp = *it;
            if(*it < *(it-1))
            {
                *it = *(it - 1);
                *(it - 1) = tmp;
                it--;
            }
            else
                break;
        }
        
    }
}
void merging_deque(std::deque<int>& deq,std::deque<int>& left,std::deque<int>& right)
{
    std::deque<int>::iterator it_left= left.begin();
    std::deque<int>::iterator it_right = right.begin();
    std::deque<int>::iterator it = deq.begin();
    
    while(it_left != left.end() && it_right != right.end())
    {
        if(*it_left <= *it_right)
        {
            *it = *it_left;
            it++;
            it_left++;
        }
        else
        {
            *it = *it_right;
            it++;
            it_right++;
        }
    }
    while(it_left != left.end())
    {
        *it = *it_left;
        it++;
        it_left++;
    }
    while(it_right != right.end())
    {
        *it = *it_right;
        it++;
        it_right++;
    }
}
void mergesort_deque(std::deque<int>& deq)
{
    std::deque<int> left;
    std::deque<int>::iterator left_begin;
    std::deque<int>::iterator right_begin;
    std::deque<int> right;
    
    if(deq.size() <= INSER)
    {
        insertion_sort_deq(deq);
        return ;
    }
    left_begin = deq.begin();
    right_begin = deq.begin() + (deq.size() / 2);
    for(;left_begin != right_begin;left_begin++)
        left.push_back(*left_begin);
    for(;right_begin != deq.end();right_begin++)
            right.push_back(*right_begin);
    mergesort_deque(left);
    mergesort_deque(right);
    merging_deque(deq,left,right);
}
int check_digit(char *s)
{
    int i = 0;
    while(s[i])
    {
        if(!std::isdigit(s[i]))
            return 0;
        i++;
    }
    if(!s[0])
        return 0;
    return 1;
}
int parse(char **av, int ac)
{
    int i = 1;
    while(i < ac)
    {
        if(!check_digit(av[i]))
            return 0;
        if(atoi(av[i]) < 0)
            return 0;
        i++;
    }
    return 1;
}
void display(std::vector<int>& vector)
{
    for(std::vector<int>::iterator it = vector.begin() ;it != vector.end();it++)
        std::cout << *it << " " ;
    std::cout << std::endl;
}
void display(std::deque<int>& deque)
{
    for(std::deque<int>::iterator it = deque.begin() ;it != deque.end();it++)
        std::cout << *it << " " ;
    std::cout << std::endl;
}
void filling(std::deque<int>& deque,std::vector<int>& vector,int ac,char **av)
{
    int i = 1;
    while(i < ac)
    {
        deque.push_back(atoi(av[i]));
        vector.push_back(atoi(av[i]));
        i++;
    }
}
void Pmerge_vec(std::vector<int>& vector)
{
    std::cout << "Before : ";
    display(vector);
    clock_t start = clock();
    mergesort(vector);
    clock_t end = clock();
    std::cout << "after : ";
    display(vector);
    double ex_time = static_cast<double>(end - start) / CLOCKS_PER_SEC * 1000000;
    std::cout << "Time to process a range of " << vector.size() << " elements with std::vector : "<<ex_time <<" us" << std::endl;
}
void Pmerge_deque(std::deque<int>& deque)
{
    // std::cout << "Before : ";
    // display(deque);
    clock_t start = clock();
    mergesort_deque(deque);
    clock_t end = clock();
    // std::cout << "after : ";
    // display(deque);
    double ex_time = static_cast<double>(end - start) / CLOCKS_PER_SEC * 1000000;
    std::cout << "Time to process a range of " << deque.size() << " elements with std::deque : "<<ex_time <<" us" << std::endl;
}
