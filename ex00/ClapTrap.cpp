#include "ClapTrap.hpp"

ClapTrap::ClapTrap(): name("no_name"), hitPoints(10),
energyPoints(10), attackDamage(0)
{
	std::cout << "ClapTrap " << name << " Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name): name(name), hitPoints(10),
energyPoints(10), attackDamage(0)
{
	std::cout << "ClapTrap " << name << " constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &copy): name(copy.name),
hitPoints(copy.hitPoints), energyPoints(copy.energyPoints),
attackDamage(copy.attackDamage)
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
		energyPoints = assign.energyPoints;
		attackDamage = assign.attackDamage;
	}
	return(*this);
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap " << name << " Destructor called" << std::endl;
}

void ClapTrap::attack(const std::string &target)
{
	if(hitPoints == 0 || energyPoints == 0)
	{
		std::cout << "ClapTrap " << name << " can't attack. Is OFF." << std::endl; 
		return;
	}

	energyPoints--;

	std::cout << "ClapTrap " << name << " attacks " <<
		target << ", causing " << attackDamage <<
			" points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if(hitPoints > amount)
	{
		hitPoints = hitPoints - amount;
		std::cout << "ClapTrap " << name << " received " << amount <<
			" points of damage. Now has "<< hitPoints << " hit points" << std::endl;
	}
	else
	{
		hitPoints = 0;
		std::cout << "ClapTrap " << name << " can't take any more damage, he's already down."
			<< std::endl;
	}
}

void ClapTrap::beRepaired(unsigned int amount)
{

	if(hitPoints == 0 || energyPoints == 0)
	{
		std::cout << "ClapTrap " << name << " can't self-repair. Is OFF." << std::endl; 
		return;
	}

	energyPoints--;

	if((hitPoints + amount) < MAX_HIT_POINTS)
	{
		hitPoints = hitPoints + amount;
	}
	else
	{
		hitPoints = MAX_HIT_POINTS;
	}
	std::cout << "ClapTrap " << name << " recover hit points." << " Now has " << hitPoints << " hit points."
		<< std::endl;
}
