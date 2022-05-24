#include <iostream>
#include "Zombie.hpp"

Zombie::Zombie( void )
{
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
