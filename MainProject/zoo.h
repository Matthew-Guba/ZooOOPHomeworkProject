#pragma once
#include "animal.h"

class Zoo {
    Animal** animals;
    int capacity;
    int count;

public:
    Zoo();
    ~Zoo();

    void addAnimal(Animal* animal);
    string listAnimals();
    string makeAllSounds();
    int getAnimalCount();
};