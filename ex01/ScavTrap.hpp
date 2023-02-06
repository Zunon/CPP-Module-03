//
// Created by Khalifa Almheiri on 2/7/23.
//

#ifndef CPP_MODULE_03_SCAVTRAP_HPP
#define CPP_MODULE_03_SCAVTRAP_HPP
#include "ClapTrap.hpp"

class ScavTrap: public ClapTrap {
	public:
		ScavTrap (void);
		ScavTrap (std::string);
		void	attack (const std::string &);
		void	guardGate (void);
		~ScavTrap (void);
};


#endif //CPP_MODULE_03_SCAVTRAP_HPP
