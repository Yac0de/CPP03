#ifndef DIAMOND_TRAP_HPP
#define DIAMOND_TRAP_HPP

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
private:
    std::string _name;
    DiamondTrap(void);
public:
    DiamondTrap(std::string name);
    DiamondTrap(const DiamondTrap & rhs);
    ~DiamondTrap(void);

    DiamondTrap & operator=(const DiamondTrap & rhs);

    using ScavTrap::attack;
    void whoAmI(void);
};

#endif
