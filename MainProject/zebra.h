#pragma once
#include "animal.h"

class Zebra : public Animal {
public:
    Zebra(string name, int age, double weight);
    string makeSound();
};