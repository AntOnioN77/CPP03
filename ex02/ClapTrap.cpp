#include "ClapTrap.hpp"
////////////////
//CONSTRUCTORS//
////////////////

ClapTrap::ClapTrap(): name("no_name"), hitPoints(10),
	max_hitPoints(10), energyPoints(10), attackDamage(0),
	type("ClapTrap")
{
	std::cout << "ClapTrap Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name): name(name), hitPoints(10),
	max_hitPoints(10), energyPoints(10), attackDamage(0),
	type("ClapTrap")
{
	std::cout << "ClapTrap " << name << " constructor(name) called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &copy): name(copy.name),
	hitPoints(copy.hitPoints), max_hitPoints(copy.max_hitPoints),
	energyPoints(copy.energyPoints), attackDamage(copy.attackDamage),
	type(copy.type)
{
	std::cout << "ClapTrap " << name << "Copy constructor called" <<  std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap &assign)
{
	std::cout << "ClapTrap " << name << "Copy assignment operator called" << std::endl;
	if(this != &assign)
	{
		name = assign.name;
		hitPoints = assign.hitPoints;
		max_hitPoints = assign.max_hitPoints;
		energyPoints = assign.energyPoints;
		attackDamage = assign.attackDamage;
		type = assign.type;
	}
	return(*this);
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap " << name << " Destructor called" << std::endl;
}

////////////////////
//ACTION FUNCTIONS//
////////////////////

void ClapTrap::attack(const std::string &target)
{
	if(hitPoints == 0 || energyPoints == 0)
	{
		std::cout << type << " " << name << " can't attack. Is OFF." << std::endl; 
		return;
	}

	energyPoints--;

	std::cout << type << " " << name << " attacks " <<
		target << ", causing " << attackDamage <<
			" points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if(hitPoints > amount)
	{
		hitPoints = hitPoints - amount;
		std::cout << type << " " << name << " received " << amount <<
			" points of damage. Now has "<< hitPoints << " hit points" << std::endl;
	}
	else
	{
		if(hitPoints != 0)
		{
			std::cout << type << " " << name << " received " << amount <<
				" points of damage. Now has 0 hit points" << std::endl;
			hitPoints = 0;
		}
		else
		{
			std::cout << type << " " << name << " can't take any more damage, he's already down."
				<< std::endl;
		}
	}
}

void ClapTrap::beRepaired(unsigned int amount)
{

	if(hitPoints == 0 || energyPoints == 0)
	{
		std::cout << type << " " << name << " can't self-repair. Is OFF." << std::endl; 
		return;
	}

	energyPoints--;

	if((hitPoints + amount) < max_hitPoints)
	{
		hitPoints = hitPoints + amount;
	}
	else
	{
		hitPoints = max_hitPoints;
	}
	std::cout << type << " " << name << " recover hit points." << " Now has " << hitPoints << " hit points."
		<< std::endl;
}

