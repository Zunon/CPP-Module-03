//
// Created by zunon on 2/6/23.
//
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

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
	FragTrap niceGuy("Khalifa");
	niceGuy.highFivesGuys();
	niceGuy.attack("Marcos");
	toughGuy.takeDamage(30);
	toughGuy.beRepaired(10);
	return (EXIT_SUCCESS);
}
