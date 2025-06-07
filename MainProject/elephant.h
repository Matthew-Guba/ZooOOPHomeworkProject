#pragma once
#include "animal.h"

class Elephant : public Animal {
public:
    Elephant(string name, int age, float weight);
    string makeSound();
};