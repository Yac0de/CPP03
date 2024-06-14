#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) : ClapTrap("default")
{
    std::cout << "ScavTrap Default constructor called for " << this->_name << std::endl;
    return;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    this->_hitPoints = 100;
    this->_energyPoints = 50;
    this->_attackDamage = 20;
    std::cout << "ScavTrap Constructor called for " << this->_name << std::endl;
    return;
}

ScavTrap::ScavTrap(const ScavTrap & rhs) : ClapTrap(rhs)
{
    *this = rhs;
    std::cout << "ScavTrap Copy constructor called for " << this->_name << std::endl;
}

ScavTrap::~ScavTrap(void)
{
    std::cout << "ScavTrap Destructor called for " << this->_name << std::endl;
    return;
}

ScavTrap & ScavTrap::operator=(const ScavTrap & rhs)
{
    if (this != &rhs)
        ClapTrap::operator=(rhs);
    std::cout << "ScavTrap Copy assignment operator called for " << this->_name << std::endl;
    return *this;
}

void ScavTrap::attack(const std::string& target)
{
    if (_energyPoints == 0)
        std::cout << "ScavTrap " << this->_name << " is out of energy and cannot attack." << std::endl;
    else if (_hitPoints == 0)
        std::cout << "ScavTrap " << this->_name << " is out of hit points and cannot attack." << std::endl;
    else
    {
        _energyPoints--;
        std::cout << "ScavTrap " << this->_name << " attacks " << target << ", causing " << _attackDamage << " points of damage!" << std::endl;
    }
}

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap " << this->_name << " is now in Gate keeper mode" << std::endl;
    return;
}
