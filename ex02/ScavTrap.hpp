#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"
# define SCAV_HIT_POINTS 100

class ScavTrap: public ClapTrap
{
	private:
	bool		gateKeeperMode;

	public:
	// Constructores
	ScavTrap();
	ScavTrap(std::string name);
	ScavTrap(const ScavTrap &copy);//copia
	ScavTrap& operator=(const ScavTrap &assign);
	~ScavTrap();
/* 	// Acciónes
	void attack(const std::string &target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
 */
	void guardGate();
};

#endif
