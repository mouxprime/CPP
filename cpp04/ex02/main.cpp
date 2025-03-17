#include "Brain.hpp"
#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
    std::cout << "-------------- Constructeurs ---------------\n" << std::endl;
    const a_Animal* j = new Dog();
    const a_Animal* i = new Cat();
    const a_Animal **tab;

    std::cout << "\n-------------- 5 Cats & 5 Dogs ---------------\n" << std::endl;
    tab = new const a_Animal*[10];
    int     index = 0;
    while (index < 5)
    {
        tab[index] = new Cat();
        std::cout << "\n" << std::endl;
        index++;
    }
    while (index < 10)
    {
        tab[index] = new Dog();
        std::cout << "\n" << std::endl;
        index++;
    }
    std::cout << "-------------- Destructeurs ---------------" << std::endl;
    delete j;
    std::cout << "\n" << std::endl;
    delete i;

    std::cout << "\n-------------- Delete Cats & Dogs ---------------\n" << std::endl;
    index = 0;
    while (index < 10)
    {
        delete tab[index];
        std::cout << "\n" << std::endl;
        index++;
    }
    delete[] tab;

    return 0;
}

