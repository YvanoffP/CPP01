#include "Zombie.hpp"

int main(void)
{
    Zombie stackZombie = Zombie("stackZomb");
    stackZombie.announce();

    Zombie *heapZombie = newZombie("HeapZomb");
    heapZombie->announce();
    delete heapZombie;
    Zombie stackZombie2 = Zombie("ClobardStack");
    stackZombie2.announce();

    return (0);
}
