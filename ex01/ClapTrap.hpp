#ifndef CLAPTRAP_HPP
#	define CLAPTRAP_HPP
#include <iostream>

class ClapTrap
{
private:
	std::string name;
	int hitPoints{100};
	int energyPoints{50};
	int attackDamage{20};
public:
	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	ClapTrap();
	ClapTrap(std::string);
	~ClapTrap();
};


#endif