#include "Weapon.hpp"

Weapon::Weapon( std::string type )
{
    _type = type;
    return ;
}

Weapon::Weapon( void )
{
    return ;
}

Weapon::~Weapon( void )
{
    return ;
}

const std::string &Weapon::getType( void )
{
    const std::string &ref = _type;
    return (ref);
}

void    Weapon::setType( std::string newType )
{
    this->_type = newType;
}
