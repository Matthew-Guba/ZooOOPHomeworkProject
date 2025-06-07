#pragma once
#include "animal.h"

class Giraffe : public Animal {
public:
    Giraffe(string name, int age, double weight);
    string makeSound();
};