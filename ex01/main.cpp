#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
    // Creating ScavTrap instances
    ScavTrap scavtrap1("Scavy");
    ScavTrap scavtrap2("Guardian");

    std::cout << std::endl;

    // ScavTrap actions
    scavtrap1.attack("Guardian");
    scavtrap2.attack("Scavy");

    std::cout << std::endl;

    scavtrap1.takeDamage(25);
    scavtrap2.takeDamage(20);

    std::cout << std::endl;

    scavtrap1.beRepaired(15);
    scavtrap2.beRepaired(10);

    std::cout << std::endl;

    // ScavTrap special function
    scavtrap2.guardGate();
    std::cout << std::endl;

    return 0;
}
