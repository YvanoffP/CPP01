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
    std::cout << "[ DEBUG ]" << std::endl;
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special- ketchup burger. I really do!" << std::endl;
}

void Harl::info( void )
{
    std::cout << "[ INFO ]" << std::endl;
    std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::warning( void )
{
    std::cout << "[ WARNING ]" << std::endl;
    std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::error( void )
{
    std::cout << "[ ERROR ]" << std::endl;
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::complain( std::string level )
{
    std::string cringe[] = {
        "DEBUG",
        "INFO",
        "WARNING",
        "ERROR",
    };

    void (Harl::*funcs[4])(void) = {
        &Harl::debug,
        &Harl::info,
        &Harl::warning,
        &Harl::error
    };

    int i;
    for (i = 0; i < 4 && level != cringe[i]; i++);
    switch (i)
    {
        case 0 : (this->*funcs[0])();
		case 1 : (this->*funcs[1])();
		case 2 : (this->*funcs[2])();
		case 3 : (this->*funcs[3])();
			break;
        default:
			std::cout << "[ Probable complaining about insignificant problems ]" << std::endl;
			break;
    }
}
