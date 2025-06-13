#include "tiger.h"

Tiger::Tiger(const std::string& name, int age, double weight, double claw_length)
    : Animal(name, age, weight), claw_length(claw_length) {
}

std::string Tiger::makeSound() const { return "Growl!"; }

std::string Tiger::getInfo() const {
    return "Tiger " + name + " (Age: " + std::to_string(age)
        + ", Weight: " + std::to_string(weight) + "kg"
        + ", Claws: " + std::to_string(claw_length) + "cm)";
}

std::string Tiger::getSpecies() const { return "Tiger"; }