#include "monkey.h"

Monkey::Monkey(const std::string& name, int age, double weight, bool can_swing)
    : Animal(name, age, weight), can_swing(can_swing) {
}

std::string Monkey::makeSound() const { return "Ooh ooh ah ah!"; }

std::string Monkey::getInfo() const {
    return "Monkey " + name + " (Age: " + std::to_string(age)
        + ", Weight: " + std::to_string(weight) + "kg"
        + ", Swinging: " + (can_swing ? "Yes" : "No") + ")";
}

std::string Monkey::getSpecies() const { return "Monkey"; }