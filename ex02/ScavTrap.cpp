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
	setAttackDamage(20);
	setEnergyPoints(50);
	setHitPoints(100);
}

ScavTrap::ScavTrap()
{
	std::cout << "ScavTrap default constructor called" << std::endl;
	setAttackDamage(20);
	setEnergyPoints(50);
	setHitPoints(100);
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap destructor called" << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& scav)
{
	std::cout << "Copy assignment operator called" << std::endl;
	std::string title = scav.getName();
	if (this == &scav)
		return (*this);
	setName(title);
	setAttackDamage(scav.getAttackDamage());
	setEnergyPoints(scav.getEnergyPoints());
	setHitPoints(scav.getHitPoints());
	return (*this);
}

ScavTrap::ScavTrap(const ScavTrap& scav)
{
	std::cout << "Copy constructor called" << std::endl;
	std::string title = scav.getName();
	setName(title);
	setAttackDamage(scav.getAttackDamage());
	setEnergyPoints(scav.getEnergyPoints());
	setHitPoints(scav.getHitPoints());
}