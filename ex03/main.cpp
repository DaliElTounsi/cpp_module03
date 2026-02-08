#include <iostream>
#include <string>

#include "DiamondTrap.hpp"

int main()
{
    std::string target("malifique man");
    DiamondTrap Diam("calpinou");
    DiamondTrap Diami(Diam);
    DiamondTrap Diamo("clapinette");


    Diam.attack(target);
    Diami.attack(target);
    Diamo.attack(target);

    Diam.highFivesGuys();
    Diami.highFivesGuys();
    Diamo.highFivesGuys();

    Diam.guardGate();
    Diami.guardGate();
    Diamo.guardGate();
    
    Diam.takeDamage(2);
    Diamo.takeDamage(4);
    Diami.takeDamage(10);

    Diam.beRepaired(1);
    Diamo.beRepaired(4);
    Diami.beRepaired(2);

    Diam.whoAmI();
    Diamo.whoAmI();
    Diami.whoAmI();
    
    
    Diami = Diamo;

    Diam.attack(target);
    Diami.attack(target);
    Diamo.attack(target);

    Diam.highFivesGuys();
    Diami.highFivesGuys();
    Diamo.highFivesGuys();

    Diam.guardGate();
    Diami.guardGate();
    Diamo.guardGate();

    Diam.takeDamage(2);
    Diamo.takeDamage(4);
    Diami.takeDamage(10);

    Diam.beRepaired(1);
    Diamo.beRepaired(4);
    Diami.beRepaired(2);

    Diam.whoAmI();
    Diamo.whoAmI();
    Diami.whoAmI();

    return 0;
}