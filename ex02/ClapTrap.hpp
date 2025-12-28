#ifndef CLAPTRAP_HPP

# define CLAPTRAP_HPP
# include <string>
# include <iostream>

# define CLAP_HIT_POINTS 10

class ClapTrap
{
	protected:
		// Atributos
		std::string		name;
		unsigned int	hitPoints;
		unsigned int	energyPoints;
		unsigned int	attackDamage;
		std::string	 	type;

	public:
		// Constructores
		ClapTrap();
		ClapTrap(std::string name);
		ClapTrap(const ClapTrap &copy);//copia
		ClapTrap &operator=(const ClapTrap &assign);
		~ClapTrap();
		// Acciónes
		void attack(const std::string &target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);

		/* //borrar
		void change_name(std::string new_name); */
};

#endif