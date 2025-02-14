#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ScavTrap.hpp"

class FragTrap : public ClapTrap
{
public:
	void highFivesGuys(void);
	FragTrap();
	FragTrap(std::string);
	FragTrap(const FragTrap&);
	FragTrap& operator= (const FragTrap&);
	~FragTrap();
};


#endif
