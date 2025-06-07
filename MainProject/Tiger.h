#pragma once
#include "animal.h"

class Tiger : public Animal {
public:
    Tiger(string name, int age, double weight);
    string makeSound();
};