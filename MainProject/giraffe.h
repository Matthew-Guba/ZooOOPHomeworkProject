#pragma once
#include "animal.h"

class Giraffe : public Animal {
    double neck_length;

public:
    Giraffe(const std::string& name, int age, double weight, double neck_length);

    std::string makeSound() const override;
    std::string getInfo() const override;
    std::string getSpecies() const override;

    double getNeckLength() const { return neck_length; }
};