#include <iostream>
#include <string>

#include "ClapTrap.hpp"

int main()
{
    std::string target("malifique man");
    ClapTrap Clap("calpinou");
    ClapTrap Clapi(Clap);
    ClapTrap Clapo("clapinette");


    Clap.attack(target);
    Clapi.attack(target);
    Clapo.attack(target);
    
    Clap.takeDamage(2);
    Clapo.takeDamage(4);
    Clapi.takeDamage(10);

    Clap.beRepaired(1);
    Clapo.beRepaired(4);
    Clapi.beRepaired(2);
    
    
    Clapi = Clapo;

    Clap.attack(target);
    Clapi.attack(target);
    Clapo.attack(target);

    Clap.takeDamage(2);
    Clapo.takeDamage(4);
    Clapi.takeDamage(10);

    Clap.beRepaired(1);
    Clapo.beRepaired(4);
    Clapi.beRepaired(2);

    return 0;
}