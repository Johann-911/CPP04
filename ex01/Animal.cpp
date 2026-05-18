#include "Animal.hpp"

Animal::Animal()
{
    std::cout << " Animal Default Constructor called" << std::endl;
}

//Copy
Animal::Animal(const Animal &copy) : type(copy.type)
{
    std::cout << " Animal Copy Constructor called" << std::endl;
}

//Copy assignment
Animal &Animal::operator=(const Animal &copy)
{
    if(this != &copy)
        type = copy.type;
    std::cout << " Animal Copy assignment called" << std::endl;
    return *this;
}

//Destructor
Animal::~Animal()
{
    std::cout << " Animal Destrcutor called" << std::endl;
}

void Animal::makeSound() const
{
    std::cout << " Animal makes Animal sound" << std::endl;
}

std::string Animal::getType() const 
{
    return type;
}