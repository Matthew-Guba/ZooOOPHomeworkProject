#include "zebra.h"

Zebra::Zebra(string name, int age, double weight)
    : Animal(name, age, false, weight, "Zebra") {
}

string Zebra::makeSound() { return "Bray!"; }