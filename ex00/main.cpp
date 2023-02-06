//
// Created by zunon on 2/6/23.
//
#include "ClapTrap.hpp"

int	main(void) {
	ClapTrap trappy;
	ClapTrap angy("Iago");
	angy = ClapTrap(ClapTrap("Singularity"));
	angy.attack("ClapTrap");
	trappy.takeDamage(0);
	trappy.beRepaired(42);
	return (EXIT_SUCCESS);
}
