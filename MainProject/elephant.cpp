#include "elephant.h"

Elephant::Elephant(string name, int age, float weight)
    : Animal(name, age, false, weight, "Elephant") {
}

string Elephant::makeSound() { return "Trumpet!"; }