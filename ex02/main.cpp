//
// Created by zunon on 2/6/23.
//
#include "ScavTrap.hpp"

int	main(void) {
	ClapTrap trappy;
	ClapTrap angy("Iago");
	angy = ClapTrap(ClapTrap("Singularity"));
	angy.attack("ClapTrap");
	trappy.takeDamage(0);
	trappy.beRepaired(42);
	ScavTrap toughGuy("Marcos");
	toughGuy.guardGate();
	toughGuy.attack("Singularity");
	angy.takeDamage(20);
	return (EXIT_SUCCESS);
}
