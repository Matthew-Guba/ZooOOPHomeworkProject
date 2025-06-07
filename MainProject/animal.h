#pragma once
#include <string>

using namespace std;

class Animal {
protected:
    string name;
    int age;
    bool is_alive;
    bool is_predator;
    double weight;
    string species;

public:
    Animal(string name, int age, bool is_predator, double weight, string species);
    virtual ~Animal();

    void setName(string newName);
    void setAge(int newAge);
    void setIsAlive(bool alive);
    void setWeight(double newWeight);

    string getName();
    int getAge();
    bool getIsAlive();
    bool getIsPredator();
    double getWeight();
    string getSpecies();

    virtual string makeSound() = 0;
    virtual string getInfo();
};