#include "ClapTrap.hpp"

bool ClapTrap::isAlive()
{
	if (getEnergyPoints() <= 0 || getHitPoints() <= 0)
		return (false);
	return (true);
}

void ClapTrap::attack(const std::string& target)
{
	if (!isAlive())
		return;
	setEnergyPoints(getEnergyPoints() - 1);
	std::cout << name << " attacks " << target 
	<< ", causing " << attackDamage << " points of damage!" << std::endl;
}
void ClapTrap::takeDamage(unsigned int amount)
{
	if (!isAlive())
		return;
	setHitPoints(getHitPoints() - static_cast<int>(amount));
	std::cout << name << " took " 
	 << amount << " points of damage!" << std::endl;
}
void ClapTrap::beRepaired(unsigned int amount)
{
	if (!isAlive())
		return;
	setEnergyPoints(getEnergyPoints() - 1);
	setHitPoints(getHitPoints() - static_cast<int>(amount));
	std::cout << name << " repaired " 
	 << amount << " points of hitPoints!" << std::endl;
}

std::string ClapTrap::getName() const
{
	return (name);
}

int ClapTrap::getHitPoints() const
{
	return (hitPoints);
}

int ClapTrap::getEnergyPoints() const
{
	return (energyPoints);
}

int ClapTrap::getAttackDamage() const
{
	return (attackDamage);
}

void ClapTrap::setName(std::string& title)
{
	name = title;
}

void ClapTrap::setAttackDamage(int val)
{
	attackDamage = val;
}

void ClapTrap::setEnergyPoints(int val)
{
	energyPoints = val;
}

void ClapTrap::setHitPoints(int val)
{
	hitPoints = val;
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

ClapTrap& ClapTrap::operator=(const ClapTrap& clap)
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

ClapTrap::ClapTrap(const ClapTrap& clap)
{
	std::cout << "Copy constructor called" << std::endl;
	std::string title = clap.getName();
	setName(title);
	setAttackDamage(clap.getAttackDamage());
	setEnergyPoints(clap.getEnergyPoints());
	setHitPoints(clap.getHitPoints());
}
