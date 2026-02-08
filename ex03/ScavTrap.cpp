#include <iostream>
#include <string>

#include "ScavTrap.hpp"

    ScavTrap::ScavTrap()
        : ClapTrap()
    {
        m_live = 100;
        m_attack = 20;
        m_enrgies = 50;
        std::cout  
            << "ScavTrap default constructor called"
            << std::endl;
    } 
    ScavTrap::ScavTrap(std::string name) 
        : ClapTrap(name)
    {
        m_live = 100;
        m_attack = 20;
        m_enrgies = 50;
        std::cout  
            << "ScavTrap constructor called"
            << std::endl;
    }

    ScavTrap::~ScavTrap() 
    {
        std::cout 
            << "ScavTrap destructor called"
            << std::endl;
    }
    
    void ScavTrap::attack(const std::string& target)
    {
    if (m_enrgies == 0 || m_live == 0)
    {
        std::cout
            << "ScavTrap "
            << m_name
            << " cannot act because it has no energy or hit points."
            << std::endl;
        return ;
    }
    m_enrgies -= 1;
    std::cout 
        << "ScavTrap "
        << m_name 
        << " attacks "
        << target
        << ", dealing " 
        << m_attack
        << " points of damage !" 
        << std::endl;

    }

    void ScavTrap::guardGate()
    {
        std::cout 
            << "ScavTrap "
            << m_name
            << " is now in Gate keeper mode."
            << std::endl;
    }