#include "ScavTrap.hpp"

int main()
{
	ClapTrap clap("derek");
	std::cout << clap.getAttackDamage() << std::endl;
	std::cout << clap.getEnergyPoints() << std::endl;
	std::cout << clap.getHitPoints() << std::endl;
	ScavTrap scav("john");
	std::cout << scav.getAttackDamage() << std::endl;
	std::cout << scav.getEnergyPoints() << std::endl;
	std::cout << scav.getHitPoints() << std::endl;
	clap.attack("some dude");
	clap.takeDamage(50);
	clap.beRepaired(25);
	clap.takeDamage(100);
	clap.takeDamage(5);
	clap.beRepaired(5);
	scav.guardGate();
	scav.attack("some other guy");
	scav.takeDamage(50);
	scav.beRepaired(25);
	scav.takeDamage(100);
	scav.takeDamage(5);
	scav.beRepaired(5);
	std::cout << clap.getAttackDamage() << std::endl;
	std::cout << clap.getEnergyPoints() << std::endl;
	std::cout << clap.getHitPoints() << std::endl;
	std::cout << scav.getAttackDamage() << std::endl;
	std::cout << scav.getEnergyPoints() << std::endl;
	std::cout << scav.getHitPoints() << std::endl;
}
