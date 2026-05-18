#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    std::cout << " Animal Default Constructor called" << std::endl;
}

//Copy
WrongAnimal::WrongAnimal(const WrongAnimal &copy) : type(copy.type)
{
    std::cout << " Animal Copy Constructor called" << std::endl;
}

//Copy assignment
WrongAnimal &WrongAnimal::operator=(const WrongAnimal &copy)
{
    if(this != &copy)
        type = copy.type;
    std::cout << " Animal Copy assignment called" << std::endl;
    return *this;
}

//Destructor
WrongAnimal::~WrongAnimal()
{
    std::cout << " Animal Destrcutor called" << std::endl;
}

void WrongAnimal::makeSound() const
{
    std::cout << " Animal makes Animal sound" << std::endl;
}

std::string WrongAnimal::getType() const 
{
    return type;
}