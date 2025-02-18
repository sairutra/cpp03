#include "ClapTrap.hpp"

bool ClapTrap::isAlive()
{
	if (energyPoints <= 0 || hitPoints <= 0)
		return (false);
	return (true);
}

void ClapTrap::attack(const std::string& target)
{
	if (!isAlive())
		return;
	energyPoints = energyPoints - 1;
	std::cout << "ClapTrap " << name << " attacks " << target 
	<< ", causing " << attackDamage << " points of damage!" << std::endl;
}
void ClapTrap::takeDamage(unsigned int amount)
{
	if (!isAlive())
		return;
	hitPoints = hitPoints - static_cast<int>(amount);
	std::cout << "ClapTrap " << name << " took " 
	 << amount << " points of damage!" << std::endl;
}
void ClapTrap::beRepaired(unsigned int amount)
{
	if (!isAlive())
		return;
	energyPoints = energyPoints - 1;
	hitPoints = hitPoints - static_cast<int>(amount);
	std::cout << "ClapTrap " << name << " repaired " 
	 << amount << " points of hitPoints!" << std::endl;
}

ClapTrap::ClapTrap(std::string title)
{
	std::cout << "ClapTrap parameterized constructor called" << std::endl;
	name = title;
	hitPoints = 10;
	energyPoints = 10;
	attackDamage = 0;
}

ClapTrap::ClapTrap()
{
	std::cout << "ClapTrap default constructor called" << std::endl;
	hitPoints = 10;
	energyPoints = 10;
	attackDamage = 0;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap destructor called" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& clap)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this == &clap)
		return (*this);
	name = clap.name;
	hitPoints = 10;
	energyPoints = 10;
	attackDamage = 0;
	return (*this);
}

ClapTrap::ClapTrap(const ClapTrap& clap)
{
	std::cout << "Copy constructor called" << std::endl;
	name = clap.name;
	hitPoints = 10;
	energyPoints = 10;
	attackDamage = 0;
}
