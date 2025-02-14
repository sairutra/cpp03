#include "ScavTrap.hpp"

void ScavTrap::attack(const std::string& target)
{
	if (!isAlive())
		return;
	energyPoints = energyPoints - 1;
	std::cout << "ScavTrap " << name << " attacks " << target 
	<< ", causing " << attackDamage << " points of damage!" << std::endl;
}

void ScavTrap::guardGate()
{
	if (!isAlive())
		return;
	std::cout << "ScavTrap now in Gate keeper mode" << std::endl;
}

ScavTrap::ScavTrap(std::string title) : ClapTrap()
{
	std::cout << "ScavTrap parameterized constructor called" << std::endl;
	name = title;
	hitPoints = 10;
	energyPoints = 10;
	attackDamage = 0;
}

ScavTrap::ScavTrap() : ClapTrap()
{
	std::cout << "ScavTrap default constructor called" << std::endl;
	hitPoints = 10;
	energyPoints = 10;
	attackDamage = 0;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap destructor called" << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& scav) 
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this == &scav)
		return (*this);
	name = scav.name;
	hitPoints = 10;
	energyPoints = 10;
	attackDamage = 0;
	return (*this);
}

ScavTrap::ScavTrap(const ScavTrap& scav) : ClapTrap()
{
	std::cout << "Copy constructor called" << std::endl;
	name = scav.name;
	hitPoints = 10;
	energyPoints = 10;
	attackDamage = 0;
}