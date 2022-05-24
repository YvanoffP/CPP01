#include "Zombie.hpp"

int main(void)
{
    Zombie *horde;

    horde = zombieHorde(12, "Tanguy");
    delete[] horde;
    return (1);
}
