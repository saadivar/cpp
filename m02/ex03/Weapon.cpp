#include "Weapon.hpp"

Weapon::Weapon(std::string Type)
{
    this->setType(Type);
}
Weapon::~Weapon()
{

}


const std::string&  Weapon::getType() const{
    return type;
    }

void Weapon::setType(std::string type) {
    this->type = type;
}