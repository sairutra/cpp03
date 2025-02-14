#ifndef CLAPTRAP_HPP
#	define CLAPTRAP_HPP
#include <iostream>

class ClapTrap
{
protected:
	std::string name;
	int hitPoints;
	int energyPoints;
	int attackDamage;
public:
	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	bool isAlive();
	ClapTrap();
	ClapTrap(const ClapTrap&);
	ClapTrap& operator= (const ClapTrap&);
	ClapTrap(std::string);
	~ClapTrap();
};


#endif