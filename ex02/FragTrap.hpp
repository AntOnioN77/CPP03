#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"
# define FRAG_HIT_POINTS 100

class FragTrap: public ClapTrap
{
	public:
	// Constructores
	FragTrap();
	FragTrap(std::string name);
	FragTrap(const FragTrap &copy);//copia
	FragTrap& operator=(const FragTrap &assign);
	~FragTrap();
	//Acciónes
	void highFivesGuys();
};

#endif
