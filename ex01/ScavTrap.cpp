//
// Created by Khalifa Almheiri on 2/7/23.
//

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) {
	std::cout << "ClapTrap " + name + " became a ScavTrap!" << std::endl;
	health = 100;
	energy = 50;
	power = 20;
}

ScavTrap::ScavTrap(std::string myName) {
	std::cout << "ScavTrap " + myName + " was born on this momentous day!" << std::endl;
	name = myName;
	health = 100;
	energy = 50;
	power = 20;
}

void	ScavTrap::attack(const std::string &target) {
	std::cout	<< "ScavTrap " + name + " pulled out a shiv and shanked "
				<< target << " for " << power << " damage!" << std::endl;
}

void	ScavTrap::guardGate(void) {
	std::cout << "ScavTrap " + name + " is now guarding the gate!" << std::endl;
}

ScavTrap::~ScavTrap(void) {
	std::cout << "ScavTrap " + name + "'s tough exterior peels away to reveal a ClapTrap hidden underneath!" << std::endl;
}
