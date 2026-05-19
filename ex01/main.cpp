#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
    // Test 1: Array mit Dogs und Cats
    const Animal* animals[4];
    
    animals[0] = new Dog();
    animals[1] = new Dog();
    animals[2] = new Cat();
    animals[3] = new Cat();
    
    std::cout << "\n--- Testing makeSound ---" << std::endl;
    for(int i = 0; i < 4; i++)
        animals[i]->makeSound();
    
    // Test 2: Brain ideas setzen (nur über Pointer - brauchst Getter!)
    Dog *dog = new Dog();
    dog->getBrain()->setIdea(0, "I want to play!");
    dog->getBrain()->setIdea(1, "I'm hungry");
    
    std::cout << "\n--- Dog ideas ---" << std::endl;
    std::cout << dog->getBrain()->getIdea(0) << std::endl;
    std::cout << dog->getBrain()->getIdea(1) << std::endl;
    
    // Test 3: Deep Copy Test
    std::cout << "\n--- Deep Copy Test ---" << std::endl;
    Dog dogCopy = *dog;  // Copy
    dogCopy.getBrain()->setIdea(0, "COPY - I want to sleep!");
    
    std::cout << "Original: " << dog->getBrain()->getIdea(0) << std::endl;
    std::cout << "Copy: " << dogCopy.getBrain()->getIdea(0) << std::endl;
    
    // Test 4: Cleanup
    std::cout << "\n--- Cleanup ---" << std::endl;
    for(int i = 0; i < 4; i++)
        delete animals[i];
    
    delete dog;
    
    return 0;
}