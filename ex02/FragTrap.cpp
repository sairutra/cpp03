#include "FragTrap.hpp"

void FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap highfives some dudes!" << std::endl;
}

FragTrap::FragTrap(std::string title) : ScavTrap()
{
	std::cout << "FragTrap parameterized constructor called" << std::endl;
	setName(title);
	setAttackDamage(30);
	setEnergyPoints(100);
	setHitPoints(100);
}

FragTrap::FragTrap() : ScavTrap()
{
	std::cout << "FragTrap default constructor called" << std::endl;
	setAttackDamage(30);
	setEnergyPoints(100);
	setHitPoints(100);
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap destructor called" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& frag)
{
	std::cout << "Copy assignment operator called" << std::endl;
	std::string title = frag.getName();
	if (this == &frag)
		return (*this);
	setName(title);
	setAttackDamage(frag.getAttackDamage());
	setEnergyPoints(frag.getEnergyPoints());
	setHitPoints(frag.getHitPoints());
	return (*this);
}

FragTrap::FragTrap(const FragTrap& frag) : ScavTrap()
{
	std::cout << "Copy constructor called" << std::endl;
	std::string title = frag.getName();
	setName(title);
	setAttackDamage(frag.getAttackDamage());
	setEnergyPoints(frag.getEnergyPoints());
	setHitPoints(frag.getHitPoints());
}