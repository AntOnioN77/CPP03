#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(void)
{
	FragTrap trap_a("Pinchitos");

	int i = 0;
	// test sin puntos de vida
	std::cout	<< "----------------------------" <<std::endl
				<< "-TEST: agotando hitPoints-" << std::endl
				<< "----------------------------" <<std::endl;
	while(i++ < 5)
	{
		std::cout << "ROUND " << i << std::endl;
		trap_a.beRepaired(2);
		trap_a.attack("TestDummie");
		trap_a.takeDamage(30);
		std::cout << std::endl;
	}

	// test agotar energyPoints
	std::cout	<< "----------------------------" <<std::endl
				<< "-TEST: agotando energyPoints-" << std::endl
				<< "----------------------------" <<std::endl;
	
	FragTrap trap_b("Muellecitos");
	i=0;
	while(i++ < 101)
	{
		std::cout << "ROUND " << i << std::endl;
		trap_b.attack("TestDummie");
		std::cout << std::endl;
	}
}
