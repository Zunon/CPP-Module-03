//
// Created by Khalifa Almheiri on 2/7/23.
//

#include "FragTrap.hpp"

FragTrap::FragTrap(void) {
	std::cout << "ClapTrap " + name + " became a FragTrap!" << std::endl;
	health = 100;
	energy = 100;
	power = 30;
}

FragTrap::FragTrap(std::string myName) {
	std::cout << "FragTrap " + myName + " was born in this hour of promise!" << std::endl;
	name = myName;
	health = 100;
	energy = 100;
	power = 30;
}

void	FragTrap::highFivesGuys(void) {
	std::cout << "FragTrap " + name + " is now giving high fives to everyone!" << std::endl;
	std::cout << name + ": \"High fives all around!\"" << std::endl;
}

FragTrap::~FragTrap(void) {
	std::cout << "FragTrap " + name + "'s cool exterior peels away to reveal a ClapTrap hidden underneath!" << std::endl;
}
