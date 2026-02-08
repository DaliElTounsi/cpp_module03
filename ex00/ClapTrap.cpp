#include <iostream>
#include <string>

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
    : m_name("default"), m_live(10), m_enrgies(10), m_attack(0)  
{

    std::cout  
        << "ClapTrap default constructor called"
        << std::endl;
}

ClapTrap::ClapTrap(std::string name)
    : m_name(name), m_live(10), m_enrgies(10), m_attack(0)
{
    std::cout  
        << "ClapTrap constructor called"
        << std::endl;
}
ClapTrap::ClapTrap(const ClapTrap& src)
    : m_name(src.m_name), m_live(src.m_live), m_enrgies(src.m_enrgies), m_attack(src.m_attack)
{
    std::cout  
        << "ClapTrap copy constructor called"
        << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& src)
{
    if (this == &src)
        return *this;
    m_name = src.m_name;
    m_live =  src.m_live;
    m_enrgies = src.m_enrgies;
    m_attack = src.m_attack;
    
    std::cout  
        << "ClapTrap operator of assignment"
        << std::endl;

    return *this;
}

ClapTrap::~ClapTrap()
{
    std::cout 
        << "ClapTrap destructor called"
        << std::endl;
}

void	ClapTrap::attack(const std::string& target)
{
    
    if (m_enrgies == 0 || m_live == 0)
    {
        std::cout
            << "ClapTrap "
            << m_name
            << " cannot act because it has no energy or hit points."
            << std::endl;
        return ;
    }
    m_enrgies -= 1;
    std::cout 
        << "ClapTrap "
        << m_name 
        << " attacks "
        << target
        << ", dealing " 
        << m_attack
        << " points of damage !" 
        << std::endl;
}


void	ClapTrap::takeDamage(unsigned int amount)
{
    if (m_live <= 0)
    {
        std::cout 
            << "ClapTrap "
            << m_name
            << " cannot take damage because it is already dead."
            << std::endl;
        return ;
    }
    if (amount >= static_cast<unsigned int>(m_live))
        m_live = 0;
    else
        m_live -= amount;
    std::cout 
        << "ClapTrap "
        << m_name 
        << " takes damage "
        << amount
        << " points of damage !" 
        << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
    if (m_enrgies == 0 || m_live == 0)
    {   
        std::cout
            << "ClapTrap "
            << m_name
            << " cannot act because it has no energy or hit points."
            << std::endl; 
        return ;
    }
    m_enrgies -= 1;
    m_live += amount;
    std:: cout
        << "ClapTrap "
        << m_name 
        << " restores "
        << amount
        << " hit points !" 
        << std::endl;
}