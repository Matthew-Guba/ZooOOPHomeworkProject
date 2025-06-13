#pragma once
#include "animal.h"

class Tiger : public Animal {
    double claw_length;

public:
    Tiger(const std::string& name, int age, double weight, double claw_length);

    std::string makeSound() const override;
    std::string getInfo() const override;
    std::string getSpecies() const override;

    double getClawLength() const { return claw_length; }
};