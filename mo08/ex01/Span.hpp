#pragma once
#include <iostream>
#include <algorithm>
#include <vector>
#include <list>


class Span{
    private:
        unsigned int ind;
        std::vector<int> container;
    public:
        Span(unsigned int n);
        Span();
        Span(const Span &rh);
        Span& operator=(const Span &rh);
        ~Span();
        void addNumber(int a);
        void addNumber(std::vector<int>::iterator begin,std::vector<int>::iterator end);
        int longestSpan();
        int shortestSpan();
        
        class out : public std::exception
        {
            public:
            const char *what() const throw();
        };
        class emp : public std::exception
        {
            public:
            const char *what() const throw();
        };
        void printvec();
};