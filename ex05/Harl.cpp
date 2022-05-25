#include "Harl.hpp"
typedef void ( *Func ) ();

Harl::Harl( void )
{
    return ;
}

Harl::~Harl( void )
{
    return ;
}

void Harl::debug( void )
{
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special- ketchup burger. I really do!" << std::endl;
}

void Harl::info( void )
{
    std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::warning( void )
{
    std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::error( void )
{
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::complain( std::string level )
{
    std::string cringe[] = {
        "debug",
        "info",
        "warning",
        "error",
    };

    void (Harl::*funcs[4])(void) = {
        &Harl::debug,
        &Harl::info,
        &Harl::warning,
        &Harl::error
    };

    for (size_t i = 0; i < sizeof(cringe); i++)
    {
        if (cringe[i] == level)
        {
            (this->*funcs[i])();
            return ;
        }
    }
    std::cout << "Harl is not inspired about this.." << std::endl;
}
