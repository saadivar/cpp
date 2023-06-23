#include "Brain.hpp"


Brain::Brain(){
    std::cout <<"Brain default constructor called" <<std::endl;
}
Brain::Brain(const Brain& br)
{
    std::cout <<"Brain copy constructor called" <<std::endl;
    *this = br;
}
Brain& Brain::operator=(const Brain& br)
{
    std::cout <<"Brain copy assign operator called" <<std::endl;
    for (int i = 0;i < 100 ;i++)
        this->ideas[i] = br.ideas[i];
    return *this;
}
Brain::~Brain()
{
    std::cout <<"Brain destroyed" <<std::endl;
}