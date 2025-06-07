#include "lion.h"

Lion::Lion(string name, int age, float weight)
    : Animal(name, age, true, weight, "Lion") {
}

string Lion::makeSound() { return "Roar!"; }