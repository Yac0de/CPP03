#ifndef FRAG_TRAP_HPP
#define FRAG_TRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
private:
    FragTrap(void);
public:
    FragTrap(std::string name);
    FragTrap(const FragTrap & rhs);
    ~FragTrap(void);

    FragTrap & operator=(const FragTrap & rhs);

    void highFivesGuys(void);
};

#endif
