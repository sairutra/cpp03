#ifndef CLAPTRAP_HPP
#	define CLAPTRAP_HPP
#include <iostream>

class ClapTrap
{
private:
	std::string name;
	int hitPoints{100};
	int energyPoints{100};
	int attackDamage{30};
public:
	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	std::string getName();
	int getHitPoints();
	int getEnergyPoints();
	int getAttackDamage();
	void setName(std::string&);
	void setHitPoints(int);
	void setEnergyPoints(int);
	void setAttackDamage(int);
	bool isAlive();
	ClapTrap();
	ClapTrap(std::string);
	~ClapTrap();
};


#endif