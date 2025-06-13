#include "zebra.h"

Zebra::Zebra(const std::string& name, int age, double weight, int stripe_count)
    : Animal(name, age, weight), stripe_count(stripe_count) {
}

std::string Zebra::makeSound() const { return "Whinny!"; }

std::string Zebra::getInfo() const {
    return "Zebra " + name + " (Age: " + std::to_string(age)
        + ", Weight: " + std::to_string(weight) + "kg"
        + ", Stripes: " + std::to_string(stripe_count) + ")";
}

std::string Zebra::getSpecies() const { return "Zebra"; }