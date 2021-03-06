#ifndef ZOMBIE_H
# define ZOMBIE_H

# include <string>

class Zombie {
public:

    Zombie( std::string name );
    ~Zombie( void );

    void announce( void );

    std::string getName( void );

private:

    std::string name;

    Zombie( void );
};

Zombie *newZombie(std::string name);
void randomChump(std::string name);

#endif
