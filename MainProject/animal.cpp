#include "animal.h"

Animal::Animal(string name, int age, bool is_predator, double weight, string species)
    : name(name), age(age), is_alive(true), is_predator(is_predator),
    weight(weight), species(species) {
}

Animal::~Animal() {}

void Animal::setName(string newName) { name = newName; }
void Animal::setAge(int newAge) { age = newAge; }
void Animal::setIsAlive(bool alive) { is_alive = alive; }
void Animal::setWeight(double newWeight) { weight = newWeight; }

string Animal::getName() { return name; }
int Animal::getAge() { return age; }
bool Animal::getIsAlive() { return is_alive; }
bool Animal::getIsPredator() { return is_predator; }
double Animal::getWeight() { return weight; }
string Animal::getSpecies() { return species; }

string Animal::getInfo() {
    return species + " " + name +
        ", Age: " + to_string(age) +
        ", Weight: " + to_string(weight) + "kg" +
        ", Status: " + (is_alive ? "Alive" : "Dead") +
        ", Type: " + (is_predator ? "Predator" : "Prey");
}