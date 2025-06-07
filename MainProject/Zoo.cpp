#include "zoo.h"

Zoo::Zoo() : capacity(10), count(0) {
    animals = new Animal * [capacity];
}

Zoo::~Zoo() {
    for (int i = 0; i < count; i++) {
        delete animals[i];
    }
    delete[] animals;
}

void Zoo::addAnimal(Animal* animal) {
    if (animal == nullptr) return;

    if (count >= capacity) {
        capacity *= 2;
        Animal** newAnimals = new Animal * [capacity];

        for (int i = 0; i < count; i++) {
            newAnimals[i] = animals[i];
        }

        delete[] animals;
        animals = newAnimals;
    }

    animals[count++] = animal;
}

string Zoo::listAnimals() {
    string result;
    for (int i = 0; i < count; i++) {
        result += animals[i]->getInfo() + "\n";
    }
    return result;
}

string Zoo::makeAllSounds() {
    string result;
    for (int i = 0; i < count; i++) {
        result += animals[i]->getSpecies() + " " + animals[i]->getName() +
            " says: " + animals[i]->makeSound() + "\n";
    }
    return result;
}

int Zoo::getAnimalCount() {
    return count;
}