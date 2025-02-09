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
