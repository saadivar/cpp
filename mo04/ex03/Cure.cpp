#include "cure.hpp"

cure()
{

}
~cure()
{

}
cure(const cure& am)
{
    this->type = am.type;
}
    cure& operator=(const cure& am)
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