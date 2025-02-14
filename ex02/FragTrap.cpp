#include "FragTrap.hpp"

void FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap highfives some dudes!" << std::endl;
}

FragTrap::FragTrap(std::string title) : ClapTrap()
{
	std::cout << "FragTrap parameterized constructor called" << std::endl;
	name = title;
	hitPoints = 100;
	energyPoints = 100;
	attackDamage = 30;
}

FragTrap::FragTrap() : ClapTrap()
{
	std::cout << "FragTrap default constructor called" << std::endl;
	hitPoints = 100;
	energyPoints = 100;
	attackDamage = 30;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap destructor called" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& frag)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this == &frag)
		return (*this);
	name = frag.name;
	hitPoints = 100;
	energyPoints = 100;
	attackDamage = 30;
	return (*this);
}

FragTrap::FragTrap(const FragTrap& frag) : ClapTrap()
{
	std::cout << "Copy constructor called" << std::endl;
	name = frag.name;
	hitPoints = 100;
	energyPoints = 100;
	attackDamage = 30;
}