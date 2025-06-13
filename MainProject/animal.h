#pragma once
#include <string>

class Animal {
protected:
    std::string name;
    int age;
    bool is_alive;
    double weight;

public:
    Animal(const std::string& name, int age, double weight);
    virtual ~Animal() {}

    virtual std::string makeSound() const = 0;
    virtual std::string getInfo() const = 0;
    virtual std::string getSpecies() const = 0;

    std::string getName() const { return name; }
    int getAge() const { return age; }
    double getWeight() const { return weight; }
    bool isAlive() const { return is_alive; }

    void die() { is_alive = false; }
};