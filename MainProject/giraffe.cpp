#include "giraffe.h"

Giraffe::Giraffe(const std::string& name, int age, double weight, double neck_length)
    : Animal(name, age, weight), neck_length(neck_length) {
}

std::string Giraffe::makeSound() const { return "Hum!"; }

std::string Giraffe::getInfo() const {
    return "Giraffe " + name + " (Age: " + std::to_string(age)
        + ", Weight: " + std::to_string(weight) + "kg"
        + ", Neck: " + std::to_string(neck_length) + "m)";
}

std::string Giraffe::getSpecies() const { return "Giraffe"; }