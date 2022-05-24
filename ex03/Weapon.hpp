#ifndef WEAPON_H
# define WEAPON_H

# include <string>
# include <iostream>

class Weapon
{
public:

    Weapon(std::string type);
    ~Weapon();
    Weapon();
    const   std::string &getType( void );
    void    setType( std::string newType );

private:

    std::string _type;

};
#endif
