#include "zoo.h"
#include <iostream>

Zoo::~Zoo() {
    for (int i = 0; i < count; i++) {
        delete animals[i];
    }
}

void Zoo::addAnimal(Animal* animal) {
    if (count < MAX_ANIMALS) {
        animals[count++] = animal;
    }
}

void Zoo::listAnimals() const {
    std::cout << "=== Zoo Animals (" << count << ") ===" << std::endl;
    for (int i = 0; i < count; i++) {
        std::cout << animals[i]->getInfo() << std::endl;
    }
}

void Zoo::makeAllSounds() const {
    std::cout << "\n=== Animal Sounds ===" << std::endl;
    for (int i = 0; i < count; i++) {
        std::cout << animals[i]->getName() << " says: "
            << animals[i]->makeSound() << std::endl;
    }
}