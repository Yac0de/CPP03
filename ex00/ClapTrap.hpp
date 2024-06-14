#ifndef CLAP_TRAP_HPP
#define CLAP_TRAP_HPP

#include <iostream>

class ClapTrap
{
private:
    std::string _name;
    unsigned int _hitPoints;
    unsigned int _energyPoints;
    unsigned int _attackDamage;

    ClapTrap(void);
public:
    ClapTrap(std::string name);
    ClapTrap(const ClapTrap & rhs);
    ~ClapTrap(void);

    ClapTrap & operator=(const ClapTrap & rhs);

    void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
};

#endif