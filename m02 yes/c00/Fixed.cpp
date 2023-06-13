#include "Fixed.hpp"

    Fixed::Fixed()
    {
        std::cout <<"Default constructor called"<<std::endl;
        this->fixed_point = 0;
    }
    Fixed::Fixed(const Fixed & other)
    {
        std::cout <<"Copy constructor called"<<std::endl;
        this->fixed_point = other.getRawBits();
    }
    Fixed& Fixed::operator=(const Fixed& other)
    {
        std::cout <<"Copy assignment operator called"<<std::endl;
        this->fixed_point = other.getRawBits();
        return(*this);
    }
        Fixed::~Fixed()
        {
            std::cout <<"Destructor called"<<std::endl;
        }
    int Fixed::getRawBits()const
    {
        std::cout <<"getRawBits member function called"<<std::endl;
        return this->fixed_point;
    }
    
     void Fixed::setRawBits( int const raw )
     {
        this->fixed_point = raw;
     }