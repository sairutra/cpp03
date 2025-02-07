#include "ClapTrap.hpp"

void ClapTrap::attack(const std::string& target)
{
	if (energyPoints <= 0 || hitPoints <= 0)
		return;
	energyPoints -= 1;
	std::cout << "ClapTrap " << name << " attacks " << target 
	<< ", causing " << attackDamage << " points of damage!" << std::endl;
}
void ClapTrap::takeDamage(unsigned int amount)
{
	if (energyPoints <= 0 || hitPoints <= 0)
		return;
	hitPoints -= amount;
	std::cout << "ClapTrap " << name << " took " 
	 << amount << " points of damage!" << std::endl;
}
void ClapTrap::beRepaired(unsigned int amount)
{
	if (energyPoints <= 0 || hitPoints <= 0)
		return;
	energyPoints -= 1;
	hitPoints += amount;
	std::cout << "ClapTrap " << name << " repaired " 
	 << amount << " points of hitPoints!" << std::endl;
}

ClapTrap::ClapTrap(std::string title)
{
	std::cout << "ClapTrap parameterized constructor called" << std::endl;
	name = title;
}

ClapTrap::ClapTrap()
{
	std::cout << "ClapTrap default constructor called" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap destructor called" << std::endl;
}

