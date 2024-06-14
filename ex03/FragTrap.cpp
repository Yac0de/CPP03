#include "FragTrap.hpp"

FragTrap::FragTrap(void) : ClapTrap("default")
{
    std::cout << "FragTrap Default constructor called for " << this->_name << std::endl;
    return;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    this->_hitPoints = 100;
    this->_energyPoints = 100;
    this->_attackDamage = 30;
    std::cout << "FragTrap Constructor called for " << this->_name << std::endl;
    return;
}

FragTrap::FragTrap(const FragTrap & rhs) : ClapTrap(rhs)
{
    *this = rhs;
    std::cout << "FragTrap Copy constructor called for " << this->_name << std::endl;
}

FragTrap::~FragTrap(void)
{
    std::cout << "FragTrap Destructor called for " << this->_name << std::endl;
    return;
}

FragTrap & FragTrap::operator=(const FragTrap & rhs)
{
    if (this != &rhs)
        ClapTrap::operator=(rhs);
    std::cout << "FragTrap Copy assignment operator called for " << this->_name << std::endl;
    return *this;
}

void FragTrap::highFivesGuys(void)
{

    if (_energyPoints == 0)
        std::cout << "ClapTrap " << this->_name << " is out of energy and cannot repair." << std::endl;
    else if (_hitPoints == 0)
        std::cout << "ClapTrap " << this->_name << " is out of hit points and cannot do high fives." << std::endl;
    else
    {
        _energyPoints--;
        std::cout << "FragTrap " << this->_name << " requests high fives!" << std::endl;

    }
    return;
}
