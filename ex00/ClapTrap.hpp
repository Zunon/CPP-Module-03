//
// Created by zunon on 2/6/23.
//

#ifndef CPP_MODULE_03_CLAPTRAP_HPP
#define CPP_MODULE_03_CLAPTRAP_HPP
#include <string>
#include <iostream>

class ClapTrap
{
	std::string		name;
	unsigned int	health;
	unsigned int	energy;
	unsigned int	power;
	public:
		ClapTrap (void);
		ClapTrap (const ClapTrap &);
		ClapTrap (std::string);
		ClapTrap	&operator= (const ClapTrap &);
		~ClapTrap (void);
		void		attack (const std::string &);
		void		takeDamage (unsigned int);
		void		beRepaired (unsigned int);
};


#endif //CPP_MODULE_03_CLAPTRAP_HPP
