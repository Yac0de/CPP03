#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void) : ClapTrap("default_clap_name"), ScavTrap("default"), FragTrap("default"), _name("default")
{
    this->_hitPoints = FragTrap::_hitPoints;
    this->_energyPoints = ScavTrap::_energyPoints;
    this->_attackDamage = FragTrap::_attackDamage;

    std::cout << "DiamondTrap Default constructor called for " << this->_name << std::endl;
    return;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), ScavTrap(name), FragTrap(name), _name(name)
{
    this->_hitPoints = FragTrap::_hitPoints;
    this->_energyPoints = ScavTrap::_energyPoints;
    this->_attackDamage = FragTrap::_attackDamage;

    std::cout << "DiamondTrap Constructor called for " << this->_name << std::endl;
    return;
}

DiamondTrap::DiamondTrap(const DiamondTrap & rhs) : ClapTrap(rhs), ScavTrap(rhs), FragTrap(rhs)
{
    *this = rhs;
    std::cout << "DiamondTrap Copy constructor called for " << this->_name << std::endl;
}

DiamondTrap::~DiamondTrap(void)
{
    std::cout << "DiamondTrap Destructor called for " << this->_name << std::endl;
    return;
}

DiamondTrap & DiamondTrap::operator=(const DiamondTrap & rhs)
{
    if (this != &rhs)
    {
        ClapTrap::operator=(rhs);
        ScavTrap::operator=(rhs);
        FragTrap::operator=(rhs);
        this->_name = rhs._name;
    }
    std::cout << "DiamondTrap Copy assignment operator called for " << this->_name << std::endl;
    return *this;
}

void DiamondTrap::whoAmI()
{
    std::cout << "My name is " << this->_name << " and my ClapTrap name is " << ClapTrap::_name << std::endl;
    return;
}
