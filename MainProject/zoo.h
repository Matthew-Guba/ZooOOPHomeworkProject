#pragma once
#include "animal.h"

class Zoo {
    static const int MAX_ANIMALS = 10;
    Animal* animals[MAX_ANIMALS];
    int count = 0;

public:
    ~Zoo();
    void addAnimal(Animal* animal);
    void listAnimals() const;
    void makeAllSounds() const;
    int getAnimalCount() const { return count; }
};