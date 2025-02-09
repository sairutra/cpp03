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
	std::string getName() const;
	int getHitPoints() const;
	int getEnergyPoints() const;
	int getAttackDamage() const;
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