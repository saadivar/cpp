#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"


int main()
{
    Dog basic;
    {
        Dog der = basic;
    }
    // basic.makeSound();
    // const Animal* j = new Dog();
    // j = new Dog();
    // const Animal* i = new Cat();
    // i->makeSound();
    // j->makeSound();
    // delete j;
    // delete i;
    // const Animal* animals[6] = { new Dog(), new Dog(), new Dog(),new Cat(), new Cat() , new Cat()};
    // for ( int i = 0; i < 6; i++ ) {
    //     delete animals[i];
    // }
return 0;
}

