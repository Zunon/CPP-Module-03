//
// Created by Khalifa Almheiri on 2/7/23.
//

#ifndef CPP_MODULE_03_FRAGTRAP_HPP
#define CPP_MODULE_03_FRAGTRAP_HPP
#include "ClapTrap.hpp"

class FragTrap: public ClapTrap {
	public:
		FragTrap (void);
		FragTrap (std::string);
		void	highFivesGuys (void);
		~FragTrap (void);
};


#endif //CPP_MODULE_03_FRAGTRAP_HPP
