#include <iostream>
#include <string>

#include "FragTrap.hpp"

 FragTrap::FragTrap()
    : ClapTrap()
{
    m_live = 100;
    m_attack = 30;
    m_enrgies = 100;
    std::cout  
        << "FragTrap default constructor called"
        << std::endl;
}

FragTrap::FragTrap(std::string name)
 : ClapTrap(name)
{
    m_live = 100;
    m_attack = 30;
    m_enrgies = 100;
    std::cout  
        << "FragTrap constructor called"
        << std::endl;
}
FragTrap::FragTrap(const FragTrap& src)
    : ClapTrap(src)
{
    std::cout  
        << "FragTrap copy constructor called"
        << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& src)
{
    if (this == &src)
        return *this;
    ClapTrap::operator=(src);
    
    std::cout  
        << "FragTrap operator of assignment"
        << std::endl;

    return *this;
}

FragTrap::~FragTrap()
{
     std::cout 
        << "FragTrap destructor called"
        << std::endl;
}

void FragTrap::highFivesGuys(void)
{
    std::cout
        << "FragTrap "
        << m_name
        << " requests a positive high five!"
        << std::endl;
}