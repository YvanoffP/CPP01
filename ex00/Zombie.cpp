#include <iostream>
#include "Zombie.hpp"

Zombie::Zombie( std::string name )
{
    this->name = name;
}

void Zombie::announce( void )
{
    std::cout << this->name << ": ";
    std::cout << "BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::~Zombie( void )
{
    std::cout << this->name << ": is really dead this time" << std::endl;
}
