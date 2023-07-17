#pragma once
#include <iostream>


template <class T>
class Array
{
    private:
        T* elem;
        unsigned int len;
    public:
        Array() : elem(new T()),len(0)
        {
        }
        ~Array()
        {
            delete [] this->elem;
        }
        Array(unsigned int n): elem(new T[n]),len(n)
        {}
        Array(const Array& a)
        {
            this->elem = new T(a.len);
            this->len = a.len;
            for(int i = 0;i < a.len;i++)
                this->elem[i] = a.elem[i];
        }
        Array& operator=(const Array& a)
        {
            delete [] this->elem;
            this->elem = new T(a.len);
            this->len = a.len;
            for(int i = 0;i < a.len;i++)
                this->elem[i] = a.elem[i];
            return *this;
        }
        T& operator[](unsigned int indx)
        {
            if(indx >= this->len)
                throw over();
            return elem[indx];
        }
        int size()
        {
            return this->len;
        }
        class over : public std::exception
        {
            public:
            const char* what()const throw()
            {
                return("out of range");
            }
        };

};