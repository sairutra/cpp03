#include "ClapTrap.hpp"

int main()
{
	ClapTrap clap("derek");
	clap.attack("some dude");
	clap.takeDamage(5);
	clap.beRepaired(5);
	clap.takeDamage(10);
	clap.takeDamage(5);
	clap.beRepaired(5);
}
