#include "Dog.hpp"

Dog::Dog()
{
    type = "Dog";
    brain = new Brain();
    std::cout << type << " Deafult constructor called" << std::endl;
}

//Copy Constr
Dog::Dog(const Dog &copy) : Animal(copy)
{
    brain = new Brain(*copy.brain);
    std::cout << type << " Copy Constructor called" << std::endl;
}

Dog &Dog::operator=(const Dog &copy)
{
    if(this != &copy)
    {
        Animal::operator=(copy);
        delete brain;
        brain = new Brain(*copy.brain);
    }
    std::cout << type << " Copy assignment constructor called" << std::endl;
    return *this;
} 

//Destructor
Dog::~Dog()
{
    delete brain;
    std::cout << type << " Destrcutor called" << std::endl;
}

void Dog::makeSound() const
{
    std::cout << type << " makes Woof" << std::endl;
}

Brain* Dog::getBrain() const
{
    return brain;
}
