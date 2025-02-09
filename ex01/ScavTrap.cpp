#include "ScavTrap.hpp"

void ScavTrap::attack(const std::string& target)
{
	if (!isAlive())
		return;
	setEnergyPoints(getEnergyPoints() - 1);
	std::cout << "ScavTrap " << getName() << " attacks " << target 
	<< ", causing " << getAttackDamage() << " points of damage!" << std::endl;
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap now in Gate keeper mode" << std::endl;
}

ScavTrap::ScavTrap(std::string title)
{
	std::cout << "ScavTrap parameterized constructor called" << std::endl;
	setName(title);
}

ScavTrap::ScavTrap()
{
	std::cout << "ScavTrap default constructor called" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap destructor called" << std::endl;
}
