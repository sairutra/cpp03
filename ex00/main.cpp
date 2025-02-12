#include "ClapTrap.hpp"

int main()
{
	ClapTrap clap("derek");
	std::cout << clap.getAttackDamage() << std::endl;
	std::cout << clap.getEnergyPoints() << std::endl;
	std::cout << clap.getHitPoints() << std::endl;
	clap.attack("some dude");
	clap.takeDamage(5);
	clap.beRepaired(5);
	clap.takeDamage(10);
	clap.takeDamage(5);
	clap.beRepaired(5);
	std::cout << clap.getAttackDamage() << std::endl;
	std::cout << clap.getEnergyPoints() << std::endl;
	std::cout << clap.getHitPoints() << std::endl;
}
