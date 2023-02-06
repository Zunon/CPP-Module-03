//
// Created by zunon on 2/6/23.
//

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) {
	name = "ClapTrap";
	health = 10;
	energy = 10;
	power = 0;
	std::cout << "ClapTrap ClapTrap has whirred into operation!" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &other) {
	name = other.name;
	health = other.health;
	energy = other.energy;
	power = other.power;
	std::cout << "ClapTrap " + name + " was duplicated!" << std::endl;
}

ClapTrap::ClapTrap(std::string myName) {
	name = myName;
	health = 10;
	energy = 10;
	power = 0;
	std::cout << "ClapTrap " + name + " joins the fray!" << std::endl;
}

ClapTrap	&ClapTrap::operator=(const ClapTrap &other) {
	if (this != &other) {
		std::cout << "ClapTrap " + name + " threw away its old self and became "
			<< other.name << " now, and please refer to it as such!" << std::endl;
		name = other.name;
		health = other.health;
		energy = other.energy;
		power = other.power;
	}
	return (*this);
}

ClapTrap::~ClapTrap(void) {
	std::cout << name + " was subject to an unlicensed disintegration!" << std::endl;
}

void	ClapTrap::attack(const std::string &other) {
	if (energy > 0) {
		std::cout	<< "ClapTrap " + name + " attacks " + other + ", "
				<< "causing " << power << " points of damage!" << std::endl;
		energy--;
	} else
		std::cout << "ClapTrap " + name + " is out of energy!" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int damage) {
	if (damage >= health && health > 0)
		std::cout << "ClapTrap " + name + " took " << damage << " and died!" << std::endl;
	else if (health > 0)
		std::cout << "ClapTrap " + name + " took " << damage << " damage!" << std::endl;
	else
		std::cout << "ClapTrap " + name + "'s corpse took a hit!" << std::endl;
}
