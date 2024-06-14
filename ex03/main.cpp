#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main()
{
    // Creating DiamondTrap instances
    DiamondTrap diamondtrap1("Diamondy");
    DiamondTrap diamondtrap2("Diamonder");

    std::cout << std::endl;

    // DiamondTrap actions
    diamondtrap1.attack("Diamonder");
    diamondtrap2.attack("Diamondy");

    std::cout << std::endl;

    diamondtrap1.takeDamage(35);
    diamondtrap2.takeDamage(30);

    std::cout << std::endl;

    diamondtrap1.beRepaired(20);
    diamondtrap2.beRepaired(25);

    std::cout << std::endl;

    // Special functions
    diamondtrap1.guardGate();    // Inherited from ScavTrap
    diamondtrap2.highFivesGuys(); // Inherited from FragTrap

    std::cout << std::endl;

    diamondtrap1.whoAmI();
    diamondtrap2.whoAmI();

    std::cout << std::endl;

    return 0;
}
