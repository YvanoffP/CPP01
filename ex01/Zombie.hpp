#ifndef ZOMBIE_H
# define ZOMBIE_H

# include <string>

class Zombie {
public:

    Zombie( void );
    ~Zombie( void );

    void announce( void );
    std::string name;

    std::string getName( void );

private:

};

Zombie *zombieHorde(int N, std::string name);

#endif
