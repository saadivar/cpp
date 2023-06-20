#include "ice.hpp"

ice()
{

}
~ice()
{

}
ice(const ice& am)
{
    this->type = am.type;
}
ice& operator=(const ice& am)
{
    this->type = am.type;
    return *this;
}
std::string const & getType() const
{
    return this->type;
}
virtual void use(ICharacter& target)
{
    
}