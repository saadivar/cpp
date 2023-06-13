#include "Fixed.hpp"

    Fixed::Fixed()
    {
        // std::cout <<"Default constructor called"<<std::endl;
        this->fixed_point = 0;
    }
    Fixed::Fixed(const int frac) 
    {
        this->setRawBits(frac);
    }
    Fixed::Fixed(const float f_p) : fixed_point(std::roundf((f_p * (1 << num_fra))))
    {
    }
    Fixed::Fixed(const Fixed & other)
    {
        // std::cout <<"Copy constructor called"<<std::endl;
        this->fixed_point = other.getRawBits();
    }
    Fixed& Fixed::operator=(const Fixed& other)
    {
        // std::cout <<"Copy assignment operator called"<<std::endl;
        this->fixed_point = other.getRawBits();
        return(*this);
    }
        Fixed::~Fixed()
        {
            // std::cout <<"Destructor called"<<std::endl;
        }
    int Fixed::getRawBits()const
    {
        // std::cout <<"getRawBits member function called"<<std::endl;
        return this->fixed_point;
    }
    
     void Fixed::setRawBits( int const raw )
     {
        this->fixed_point = raw << num_fra;
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

    float Fixed::operator*(const Fixed &right)
    {
        return((this->toFloat() * right.toFloat()));
    }
     