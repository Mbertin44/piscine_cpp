#include "../includes/ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	std::cout << "ScavTrap constructor called" << std::endl;
	this->_hit_points = 100;
	this->_energy_points = 50;
	this->_attack_damage = 20;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap destructor called" << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
	if (this->_energy_points == 0)
	{
		std::cout << YELLOW_CL "ClapTrap " << this->_name << " don't have enought energy point to attack" WHITE_CL << std::endl << std::endl;
		return ;
	}
	std::cout << PINK_CL "ClapTrap " << this->_name << " attack " << target << ", causing " << this->_attack_damage << " points of damage  AND THE MESSAGE IS DIFFERENT FROM MOTHER DRAGON" WHITE_CL << std::endl << std::endl;
	this->_energy_points -= 1;
}

void ScavTrap::guardGate()
{
	std::cout << PINK_CL "ScavTrap is now in Gate keeper mode" WHITE_CL << std::endl << std::endl;
}
