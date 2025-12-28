#include "FragTrap.hpp"

////////////////
//CONSTRUCTORS//
////////////////

FragTrap::FragTrap(): ClapTrap()
{
	hitPoints = FRAG_HIT_POINTS;
	energyPoints = 100;
	max_hitPoints = FRAG_HIT_POINTS;
	attackDamage = 30;
	std::cout << "FragTrap Default constructor called" << std::endl;
	type = "FragTrap";
}

	FragTrap::FragTrap(std::string name): ClapTrap(name)
	{
		hitPoints = FRAG_HIT_POINTS;
		max_hitPoints = FRAG_HIT_POINTS;
		energyPoints = 100;
		attackDamage = 30;
		std::cout << "FragTrap " << name << " Name constructor called" << std::endl;
		type = "FragTrap";
	}

	FragTrap::FragTrap(const FragTrap &copy): ClapTrap(copy)
	{
		std::cout << "FragTrap " << name << " copy constructor called" << std::endl;
	}

	FragTrap& FragTrap::operator=(const FragTrap &assign)
	{
		if(this != &assign)
		{
			this->ClapTrap::operator=(assign);
		}
		return(*this);
	}

	FragTrap::~FragTrap()
	{
		std::cout << "FragTrap " << name << " Destructor called" << std::endl;
	}

	void FragTrap::highFivesGuys()
	{
			std::cout << "FragTrap " << name << "says: Hey guys, high five! " << std::endl;
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