#include "Fixed.hpp"
#include <stdio.h>
    Fixed::Fixed()
    {
        this->fixed_point = 0;
    }
    Fixed::Fixed(const int frac) : fixed_point(frac<<num_fra)
    {
        
    }
    Fixed::Fixed(const float f_p) : fixed_point(roundf((f_p * (1 << num_fra))))
    {
    }
    Fixed::Fixed(const Fixed & other)
    {
     
        this->fixed_point = other.getRawBits();
    }
    Fixed& Fixed::operator=(const Fixed& other)
    {
     
        this->fixed_point = other.getRawBits();
        return(*this);
    }
        Fixed::~Fixed()
        {
        }
    int Fixed::getRawBits()const
    {
       
        return this->fixed_point;
    }
    
     void Fixed::setRawBits( int const raw )
     {
        this->fixed_point = raw;
     }

     float Fixed::toFloat( void ) const
     {
        float scale = 1 << num_fra;
        return this->fixed_point / scale;
     }
      int Fixed::toInt( void ) const
     {
        return (this->fixed_point >> num_fra);
     }
     std::ostream & operator<<(std::ostream & stream, Fixed const & other) {
	    stream << other.toFloat();
	return stream;
    }
     
    Fixed &Fixed::operator++()
    {
        this->fixed_point++;
        return (*this);
    }
    Fixed Fixed::operator++(int )
    {
        Fixed temp(*this);
        this->fixed_point++;
        return (temp);
    }
    Fixed &Fixed::operator--()
    {
        this->fixed_point--;
        return (*this);
    }
    Fixed Fixed::operator--(int )
    {
        Fixed temp(*this);
        this->fixed_point--;
        return (temp);
    }

    float Fixed::operator*(const Fixed &right)
    {
        return((this->toFloat() * right.toFloat()));
    }
    float Fixed::operator+(const Fixed &right)
    {
        return((this->toFloat() + right.toFloat()));
    }
    float Fixed::operator-(const Fixed &right)
    {
        return((this->toFloat() - right.toFloat()));
    }
    float Fixed::operator/(const Fixed &right)
    {
        return((this->toFloat() / right.toFloat()));
    }
    bool	Fixed::operator>(const Fixed& right) const
    {
        return (this->getRawBits() > right.getRawBits());
    }

    bool	Fixed::operator<(const Fixed& right) const
    {
        return (this->getRawBits() < right.getRawBits());
    }

    bool	Fixed::operator>=(const Fixed& right) 
    {
        return (this->getRawBits() >= right.getRawBits());
    }

    bool	Fixed::operator<=(const Fixed& right) 
    {
        return (this->getRawBits() <= right.getRawBits());
    }

    bool	Fixed::operator==(const Fixed& right) 
    {
        return (this->getRawBits() == right.getRawBits());
    }

    bool	Fixed::operator!=(const Fixed& right) 
    {
        return (this->getRawBits() != right.getRawBits());
    }
    Fixed&	Fixed::min(Fixed& left, Fixed& right)
    {
      
        if (left < right)
            return (left);
        return (right);
    }

    Fixed&	Fixed::max(Fixed& left, Fixed& right)
    {
        if (left > right)
        {
            return (left);
        }
        return (right);
    }

    const Fixed&	Fixed::min(const Fixed& left, const Fixed& right)
    {
        if (left < right)
            return (left);
        return (right);
    }

    const Fixed&	Fixed::max(const Fixed& left, const Fixed& right)
    {
        if (left > right)
        {   
            return (left);
        }
        return (right);
    }
        