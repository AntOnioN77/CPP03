#include "ScavTrap.hpp"

ScavTrap::ScavTrap(): ClapTrap()
{
	hitPoints = 100;
	energyPoints = 50;
	attackDamage = 20;
	gateKeeperMode = false;
	std::cout << "ScavTrap Default constructor called" << std::endl;
}

	ScavTrap::ScavTrap(std::string name): ClapTrap(name)
	{
		hitPoints = 100;
		energyPoints = 50;
		attackDamage = 20;
		gateKeeperMode = false;
		std::cout << "ScavTrap " << name << " Name constructor called" << std::endl;
	}

	ScavTrap::ScavTrap(const ScavTrap &copy): ClapTrap(copy)
	{
		std::cout << "ScavTrap " << name << " copy constructor called" << std::endl;
	}

	ScavTrap& ScavTrap::operator=(const ScavTrap &assign)
	{
		if(this != &assign)
		{
			this->ClapTrap::operator=(assign);
			gateKeeperMode = assign.gateKeeperMode;
		}
		return(*this);
	}

	ScavTrap::~ScavTrap()
	{
		std::cout << "ScavTrap " << name << " Destructor called" << std::endl;
	}

	void ScavTrap::guardGate()
	{
		if(gateKeeperMode == false)
		{
			gateKeeperMode = true;
			std::cout << "ScavTrap " << name << " is now in Gate keeper mode." << std::endl;
		}
		else
		{
			std::cout << "ScavTrap " << name << " is still in Gate keeper mode." << std::endl;
		}
	}
