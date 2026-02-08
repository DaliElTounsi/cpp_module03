#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include <string>
#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap
{
public:
	DiamondTrap();
	DiamondTrap(std::string name);
	~DiamondTrap();

	void	whoAmI() const;
	void	attack(const std::string& target);

private:

	std::string m_name;

};

#endif