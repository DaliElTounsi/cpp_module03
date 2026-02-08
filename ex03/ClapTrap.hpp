#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP 

#include <string>



class ClapTrap
{
public:
	ClapTrap();
	ClapTrap(std::string name);
	ClapTrap(const ClapTrap& src);
	ClapTrap& operator=(const ClapTrap& src);
	~ClapTrap();
	
	
void	attack(const std::string& target);
void	takeDamage(unsigned int amount);
void	beRepaired(unsigned int amount);



protected:

	std::string m_name;
	int         m_live;
	int         m_enrgies;
	int  		m_attack;

};

#endif 