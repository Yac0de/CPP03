#ifndef SCAV_TRAP_HPP
#define SCAV_TRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
private:
    ScavTrap(void);
public:
    ScavTrap(std::string name);
    ScavTrap(const ScavTrap & rhs);
    ~ScavTrap(void);

    ScavTrap & operator=(const ScavTrap & rhs);

    void attack(const std::string& target);
    void guardGate();
};

#endif