#pragma once
#include "animal.h"

class Zebra : public Animal {
    int stripe_count;

public:
    Zebra(const std::string& name, int age, double weight, int stripe_count);

    std::string makeSound() const override;
    std::string getInfo() const override;
    std::string getSpecies() const override;

    int getStripeCount() const { return stripe_count; }
};