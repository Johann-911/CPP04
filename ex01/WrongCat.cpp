#include "WrongCat.hpp"

WrongCat::WrongCat()
{
    type = "WrongCat";
    std::cout << type << " Deafult constructor called" << std::endl;
}

//Copy Constr
WrongCat::WrongCat(const WrongCat &copy) : WrongAnimal(copy)
{
    std::cout << type << "Copy Constructor called" << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &copy)
{
    WrongAnimal::operator=(copy);
    std::cout << type << " Copy assignment constructor called" << std::endl;
    return *this;
} 

//Destructor
WrongCat::~WrongCat()
{
    std::cout << type << "Destrcutor called" << std::endl;
}

void WrongCat::makeSound() const
{
    std::cout << type << " makes Meow" << std::endl;
}
