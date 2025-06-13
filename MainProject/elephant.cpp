#include "elephant.h"

Elephant::Elephant(const std::string& name, int age, double weight, double tusk_length)
    : Animal(name, age, weight), tusk_length(tusk_length) {
}

std::string Elephant::makeSound() const { return "Trumpet!"; }

std::string Elephant::getInfo() const {
    return "Elephant " + name + " (Age: " + std::to_string(age)
        + ", Weight: " + std::to_string(weight) + "kg"
        + ", Tusks: " + std::to_string(tusk_length) + "cm)";
}

std::string Elephant::getSpecies() const { return "Elephant"; }