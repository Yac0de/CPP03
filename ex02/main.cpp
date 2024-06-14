#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
    // Creating FragTrap instances
    FragTrap fragtrap1("Fraggy");
    FragTrap fragtrap2("Fragger");

    std::cout << std::endl;

    // Attack
    fragtrap1.attack("Fragger");
    fragtrap2.attack("Fraggy");

    std::cout << std::endl;

    // Take damage
    fragtrap1.takeDamage(25);
    fragtrap2.takeDamage(20);

    std::cout << std::endl;

    // Repair
    fragtrap1.beRepaired(15);
    fragtrap2.beRepaired(10);

    std::cout << std::endl;

    // FragTrap Special function
    fragtrap1.highFivesGuys();
    fragtrap2.highFivesGuys();

    std::cout << std::endl;

    return 0;
}
