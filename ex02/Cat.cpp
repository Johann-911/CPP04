#include "Cat.hpp"


Cat::Cat()
{
    type = "Cat";
    brain = new Brain();
    std::cout << type << " Default constructor called" << std::endl;
}

//Copy Constr
Cat::Cat(const Cat &copy) : Animal(copy)
{
    brain = new Brain(*copy.brain);
    std::cout << type << "Copy Constructor called" << std::endl;
}

Cat &Cat::operator=(const Cat &copy)
{
    if(this != &copy)
    {
        Animal::operator=(copy);
        delete brain;
        brain= new Brain(*copy.brain);
    }
    std::cout << type << " Copy assignment constructor called" << std::endl;
    return *this;
} 

//Destructor
Cat::~Cat()
{
    delete brain;
    std::cout << type << "D estrcutor called" << std::endl;
}

void Cat::makeSound() const
{
    std::cout << type << " makes Meow" << std::endl;
}

Brain *Cat::getBrain() const
{
    return brain;
}
