#pragma once
#include "animal.h"

class Monkey : public Animal {
    bool can_swing;

public:
    Monkey(const std::string& name, int age, double weight, bool can_swing);

    std::string makeSound() const override;
    std::string getInfo() const override;
    std::string getSpecies() const override;

    bool canSwing() const { return can_swing; }
};