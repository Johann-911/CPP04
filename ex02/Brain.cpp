#include "Brain.hpp"

Brain::Brain()
{
    std::cout << " Brain Default constructor called" << std::endl;
}

//Copy const
Brain::Brain(const Brain &copy)
{
    for(int i = 0; i < 100; i++)
        ideas[i] = copy.ideas[i];
    std::cout << " Brain copy constructor called" << std::endl;
}

//Copy assignment
Brain &Brain::operator=(const Brain &copy)
{
    if(this != &copy)
    {
        for(int i = 0; i < 100; i++)
        {
            ideas[i] = copy.ideas[i];
        }
    }   
    std::cout << " Brain Copy assignment called" << std::endl;
    return *this;
}

//Destructor
Brain::~Brain()
{
    std::cout << "Brain Destructor called" << std::endl;
}

void Brain::setIdea(int index, const std::string idea)
{
    if(index >= 0 && index < 100)
        ideas[index] = idea;
}

std::string Brain::getIdea(int index) const
{
    if(index >= 0 && index < 100)
        return ideas[index];
    return std::string();
}