#include "ClapTrap.hpp"

int main() {
    ClapTrap a("ClapTrap_A");
    ClapTrap b("ClapTrap_B");
    ClapTrap c(a);

    a.attack("target_1");
    b.takeDamage(5);
    b.beRepaired(3);
    c.attack("target_2");

    return 0;
}
