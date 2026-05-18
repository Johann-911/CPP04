#include "Dog.hpp"


Dog::Dog()
{
    type = "Dog";
    std::cout << type << " Deafult constructor called" << std::endl;
}

//Copy Constr
Dog::Dog(const Dog &copy) : Animal(copy)
{
    std::cout << type << " Copy Constructor called" << std::endl;
}

Dog &Dog::operator=(const Dog &copy)
{
    Animal::operator=(copy);
    std::cout << type << " Copy assignment constructor called" << std::endl;
    return *this;
} 

//Destructor
Dog::~Dog()
{
    std::cout << type << " Destrcutor called" << std::endl;
}

void Dog::makeSound() const
{
    std::cout << type << " makes Woof" << std::endl;
}
