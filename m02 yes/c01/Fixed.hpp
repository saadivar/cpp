#ifndef FIXED_HPP
#define FIXED_HPP


#include <iostream>
#include <cmath>


class Fixed{
    private:
        int fixed_point;
        static const int num_fra = 8;
    public:
        Fixed();
        Fixed(const int frac);
        Fixed(const float f_p);
        Fixed(const Fixed & other);
        Fixed &operator=(const Fixed& other);
        ~Fixed(); 
        int getRawBits()const;
        void setRawBits( int const raw );
        float toFloat( void ) const;
        int toInt( void ) const;
    
};
std::ostream & operator<<(std::ostream & stream, Fixed const & other);
#endif