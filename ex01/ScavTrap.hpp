#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"


class ScavTrap: public ClapTrap
{
	private:
	bool		gateKeeperMode;

	public:
	ScavTrap();
	ScavTrap(std::string name);
	ScavTrap(const ScavTrap &copy);//copia
	ScavTrap& operator=(const ScavTrap &assign);
	~ScavTrap();

	void guardGate();
};

#endif
