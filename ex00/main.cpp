#include "ClapTrap.hpp"

int main()
{
    // Creating ClapTrap instances
    ClapTrap claptrap1("Clappy");
    ClapTrap claptrap2("Trapster");

    std::cout << std::endl;

    // Attack tests
    claptrap1.attack("Trapster");
    claptrap2.attack("Clappy");

    std::cout << std::endl;

    // Take damage tests
    claptrap1.takeDamage(5);
    claptrap2.takeDamage(7);

    std::cout << std::endl;

    // Repair tests
    claptrap1.beRepaired(4);
    claptrap2.beRepaired(3);

    std::cout << std::endl;

    // Energy depletion test
    for (int i = 0; i < 10; ++i)
        claptrap1.attack("Trapster");

    std::cout << std::endl;

    // Repair attempt without energy
    claptrap1.beRepaired(5);
    claptrap2.beRepaired(5);

    std::cout << std::endl;

    // Life point depletion test
    claptrap2.takeDamage(30);

    std::cout << std::endl;

    return 0;
}
