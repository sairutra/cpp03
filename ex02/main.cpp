#include "FragTrap.hpp"

int main()
{
	ClapTrap clap("derek");
	ScavTrap scav("john");
	FragTrap frag("jim");
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
	frag.highFivesGuys();
}
