#include "tiger.h"

Tiger::Tiger(string name, int age, double weight)
    : Animal(name, age, true, weight, "Tiger") {
}

string Tiger::makeSound() { return "Growl!"; }