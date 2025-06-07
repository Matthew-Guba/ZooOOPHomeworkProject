#pragma once
#include "animal.h"

class Lion : public Animal {
public:
    Lion(string name, int age, float weight);
    string makeSound();
};