#include <iostream>
#include <string>

#include "ScavTrap.hpp"

int main()
{
    std::string target("malifique man");
    ScavTrap Scav("calpinou");
    ScavTrap Scavi(Scav);
    ScavTrap Scavo("clapinette");


    Scav.attack(target);
    Scavi.attack(target);
    Scavo.attack(target);

    Scav.guardGate();
    Scavi.guardGate();
    Scavo.guardGate();
    
    Scav.takeDamage(2);
    Scavo.takeDamage(4);
    Scavi.takeDamage(10);

    Scav.beRepaired(1);
    Scavo.beRepaired(4);
    Scavi.beRepaired(2);
    
    
    Scavi = Scavo;

    Scav.attack(target);
    Scavi.attack(target);
    Scavo.attack(target);

    Scav.guardGate();
    Scavi.guardGate();
    Scavo.guardGate();

    Scav.takeDamage(2);
    Scavo.takeDamage(4);
    Scavi.takeDamage(10);

    Scav.beRepaired(1);
    Scavo.beRepaired(4);
    Scavi.beRepaired(2);

    return 0;
}