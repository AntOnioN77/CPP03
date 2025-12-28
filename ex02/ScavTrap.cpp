#include "ScavTrap.hpp"

////////////////
//CONSTRUCTORS//
////////////////

ScavTrap::ScavTrap(): ClapTrap()
{
	hitPoints = SCAV_HIT_POINTS;
	energyPoints = 50;
	attackDamage = 20;
	gateKeeperMode = false;
	std::cout << "ScavTrap Default constructor called" << std::endl;
	type = "ScavTrap";
}

	ScavTrap::ScavTrap(std::string name): ClapTrap(name)
	{
		hitPoints = SCAV_HIT_POINTS;
		energyPoints = 50;
		attackDamage = 20;
		gateKeeperMode = false;
		std::cout << "ScavTrap " << name << " Name constructor called" << std::endl;
		type = "ScavTrap";
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
/* 
////////////////////
//ACTION FUNCTIONS//
////////////////////

void ScavTrap::attack(const std::string &target)
{
	if(hitPoints == 0 || energyPoints == 0)
	{
		std::cout << "ScavTrap " << name << "can't attack. Is OFF." << std::endl; 
		return;
	}

	energyPoints--;

	std::cout << "ScavTrap " << name << " attacks " <<
		target << ", causing " << attackDamage <<
			" points of damage!" << std::endl;
}

void ScavTrap::takeDamage(unsigned int amount)
{
	if(hitPoints > amount)
	{
		hitPoints = hitPoints - amount;
		std::cout << "ScavTrap " << name << " received " << amount <<
			" points of damage. Now has "<< hitPoints << " hit points" << std::endl;
	}
	else
	{
		hitPoints = 0;
		std::cout << "ScavTrap " << name << "can't take any more damage, he's already down."
			<< std::endl;
	}
}

void ScavTrap::beRepaired(unsigned int amount)
{

	if(hitPoints == 0 || energyPoints == 0)
	{
		std::cout << "ScavTrap " << name << " can't self-repair. Is OFF." << std::endl; 
		return;
	}

	energyPoints--;

	if((hitPoints + amount) < SCAV_HIT_POINTS)
	{
		hitPoints = hitPoints + amount;
	}
	else
	{
		hitPoints = SCAV_HIT_POINTS;
	}
	std::cout << "ScavTrap " << name << " recover hit points." << " Now has " << hitPoints << " hit points."
		<< std::endl;
}

 */