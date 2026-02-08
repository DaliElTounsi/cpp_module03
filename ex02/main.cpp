#include <iostream>
#include <string>

#include "FragTrap.hpp"

int main()
{
    std::string target("malifique man");
    FragTrap Frag("calpinou");
    FragTrap Fragi(Frag);
    FragTrap Frago("clapinette");


    Frag.attack(target);
    Fragi.attack(target);
    Frago.attack(target);

    Frag.highFivesGuys();
    Fragi.highFivesGuys();
    Frago.highFivesGuys();
    
    Frag.takeDamage(2);
    Frago.takeDamage(4);
    Fragi.takeDamage(10);

    Frag.beRepaired(1);
    Frago.beRepaired(4);
    Fragi.beRepaired(2);
    
    
    Fragi = Frago;

    Frag.attack(target);
    Fragi.attack(target);
    Frago.attack(target);

    Frag.highFivesGuys();
    Fragi.highFivesGuys();
    Frago.highFivesGuys();

    Frag.takeDamage(2);
    Frago.takeDamage(4);
    Fragi.takeDamage(10);

    Frag.beRepaired(1);
    Frago.beRepaired(4);
    Fragi.beRepaired(2);

    return 0;
}