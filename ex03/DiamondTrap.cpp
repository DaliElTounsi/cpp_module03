#include <iostream>
#include <string>

#include "DiamondTrap.hpp"

 DiamondTrap::DiamondTrap()
    :  ClapTrap("default_clap_name"), FragTrap(), ScavTrap(), m_name("default")
 {
    m_live = 100;
    m_enrgies = 50;
    m_attack = 30;
    std::cout  
        << "DiamondTrap constructor called"
        << std::endl;
 }

DiamondTrap::DiamondTrap(std::string name)
 : ClapTrap(name + "_clap_name"), FragTrap(), ScavTrap(), m_name(name)
{
    m_live = 100;
    m_enrgies = 50;
    m_attack = 30;
    std::cout  
        << "DiamondTrap constructor called"
        << std::endl;

}

DiamondTrap::~DiamondTrap()
{
    std::cout 
        << "DiamondTrap destructor called"
        << std::endl;
}


void	DiamondTrap::attack(const std::string& target)
{
    ScavTrap::attack(target);
}

void DiamondTrap::whoAmI() const
{
    std::cout
        << "I am DiamondTrap "
        << m_name
        << " and my ClapTrap name is "
        << ClapTrap::m_name
        << std::endl;
}
