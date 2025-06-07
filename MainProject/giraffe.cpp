#include "giraffe.h"

Giraffe::Giraffe(string name, int age, double weight)
    : Animal(name, age, false, weight, "Giraffe") {
}

string Giraffe::makeSound() { return "Hum!"; }