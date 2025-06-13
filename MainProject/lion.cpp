#include "lion.h"

Lion::Lion(const std::string& name, int age, double weight, double mane_size)
    : Animal(name, age, weight), mane_size(mane_size) {
}

std::string Lion::makeSound() const { return "Roar!"; }

std::string Lion::getInfo() const {
    return "Lion " + name + " (Age: " + std::to_string(age)
        + ", Weight: " + std::to_string(weight) + "kg"
        + ", Mane: " + std::to_string(mane_size) + "cm)";
}

std::string Lion::getSpecies() const { return "Lion"; }