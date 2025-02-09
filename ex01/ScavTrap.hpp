#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
public:
	void attack(const std::string& target);
	void guardGate();
	ScavTrap();
	ScavTrap(std::string);
	~ScavTrap();
};


#endif
