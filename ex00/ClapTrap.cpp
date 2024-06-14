#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) : _name("default"), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
    std::cout << "ClapTrap Default constructor called for " << this->_name << std::endl;
    return;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
    std::cout << "ClapTrap Constructor called for " << this->_name << std::endl;
    return;
}

ClapTrap::ClapTrap(const ClapTrap & rhs)
{
    *this = rhs;
    std::cout << "ClapTrap Copy constructor called for " << this->_name << std::endl;
    return;
}

ClapTrap::~ClapTrap(void)
{
    std::cout << "ClapTrap Destructor called for " << this->_name << std::endl;
    return; 
}

ClapTrap & ClapTrap::operator=(const ClapTrap & rhs)
{
    if(this != &rhs)
    {
        this->_name = rhs._name;
        this->_hitPoints = rhs._hitPoints;
        this->_energyPoints = rhs._energyPoints;
        this->_attackDamage = rhs._attackDamage;
    }
    std::cout << "ClapTrap Copy assignment operator called for " << this->_name << std::endl;
    return *this;
}

void ClapTrap::attack(const std::string& target)
{
    if (_energyPoints == 0)
        std::cout << "ClapTrap " << this->_name << " is out of energy and cannot attack." << std::endl;
    else if (_hitPoints == 0)
        std::cout << "ClapTrap " << this->_name << " is out of hit points and cannot attack." << std::endl;
    else
    {
        _energyPoints--;
        std::cout << "ClapTrap " << this->_name << " attacks " << target << ", causing " << _attackDamage << " points of damage!" << std::endl;
    }
}

void ClapTrap::takeDamage(unsigned int amount)
{
    std::cout << "ClapTrap " << this->_name << " suffers " << amount << " points of damage." << std::endl;
    if (_hitPoints <= amount)
    {
        _hitPoints = 0;
        std::cout << "ClapTrap " << this->_name << " is out of order!" << std::endl;
    }
    else
        _hitPoints -= amount;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (_energyPoints == 0)
        std::cout << "ClapTrap " << this->_name << " is out of energy and cannot repair." << std::endl;
    else if (_hitPoints == 0)
        std::cout << "ClapTrap " << this->_name << " is out of hit points and cannot be repaired." << std::endl;
    else
    {
        _energyPoints--;
        _hitPoints += amount;
        std::cout << "ClapTrap " << this->_name << " repairs itself for " << amount << " hit points." << std::endl;
    }
}
