#pragma once
#include "animal.h"

class Lion : public Animal {
    double mane_size;

public:
    Lion(const std::string& name, int age, double weight, double mane_size);

    std::string makeSound() const override;
    std::string getInfo() const override;
    std::string getSpecies() const override;

    double getManeSize() const { return mane_size; }
};