#include "Cat.hpp"


Cat::Cat()
{
    type = "Cat";
    std::cout << type << " Deafult constructor called" << std::endl;
}

//Copy Constr
Cat::Cat(const Cat &copy) : Animal(copy)
{
    std::cout << type << "C opy Constructor called" << std::endl;
}

Cat &Cat::operator=(const Cat &copy)
{
    Animal::operator=(copy);
    std::cout << type << " Copy assignment constructor called" << std::endl;
    return *this;
} 

//Destructor
Cat::~Cat()
{
    std::cout << type << "D estrcutor called" << std::endl;
}

void Cat::makeSound() const
{
    std::cout << type << " makes Meow" << std::endl;
}
