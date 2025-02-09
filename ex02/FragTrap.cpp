#include "FragTrap.hpp"

void FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap highfives some dudes!" << std::endl;
}

FragTrap::FragTrap(std::string title)
{
	std::cout << "FragTrap parameterized constructor called" << std::endl;
	setName(title);
}

FragTrap::FragTrap()
{
	std::cout << "FragTrap default constructor called" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap destructor called" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& clap)
{
	std::cout << "Copy assignment operator called" << std::endl;
	std::string title = clap.getName();
	if (this == &clap)
		return (*this);
	setName(title);
	setAttackDamage(clap.getAttackDamage());
	setEnergyPoints(clap.getEnergyPoints());
	setHitPoints(clap.getHitPoints());
	return (*this);
}

FragTrap::FragTrap(const FragTrap& clap)
{
	std::cout << "Copy constructor called" << std::endl;
	std::string title = clap.getName();
	setName(title);
	setAttackDamage(clap.getAttackDamage());
	setEnergyPoints(clap.getEnergyPoints());
	setHitPoints(clap.getHitPoints());
}