#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap trap_a("Pinchitos");

	int i = 0;
	// test sin puntos de vida
	std::cout	<< "----------------------------" <<std::endl
				<< "-TEST: agotando hitPoints-" << std::endl
				<< "----------------------------" <<std::endl;
	while(i++ < 4)
	{
		std::cout << "ROUND " << i << std::endl;
		trap_a.beRepaired(2);
		trap_a.attack("TestDummie");
		trap_a.takeDamage(5);
		std::cout << std::endl;
	}

	// test agotar energyPoints
	std::cout	<< "----------------------------" <<std::endl
				<< "-TEST: agotando energyPoints-" << std::endl
				<< "----------------------------" <<std::endl;
	
	ClapTrap trap_b("Muellecitos");
	i=0;
	while(i++ < 11)
	{
		std::cout << "ROUND " << i << std::endl;
		trap_b.attack("TestDummie");
		std::cout << std::endl;
	}


}


/* //Demostracion de que el constructor de copia,
// copia un nuevo string name, no sigue apuntando al name original
int main(void)
{
	std::string nombrecito("Aaaa");
	ClapTrap a(nombrecito);
	ClapTrap b = a;
	nombrecito = "ERRor";
	a.change_name("AaCHANGED");

	std::cout << b.name;
	std::cout << a.name;

} */