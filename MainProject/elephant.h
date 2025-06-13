#pragma once
#include "animal.h"

class Elephant : public Animal {
    double tusk_length;

public:
    Elephant(const std::string& name, int age, double weight, double tusk_length);

    std::string makeSound() const override;
    std::string getInfo() const override;
    std::string getSpecies() const override;

    double getTuskLength() const { return tusk_length; }
};