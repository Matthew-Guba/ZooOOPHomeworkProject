#include "animals.h"

string Animal::getName() { return name; }
void Animal::setName(string nm) { name = nm; }

int Animal::getAge() { return age; }
void Animal::setAge(int ag) { age = ag; }

double Animal::getWeight() { return weight; }
void Animal::setWeight(double wt) { weight = wt; }


string Animal::toString() const {
    ostringstream stream;
    stream << fixed << setprecision(2) << weight;
    return "Name: " + name + ", age: " + to_string(age) +
        ", weight: " + stream.str() + ", predator: " + (is_predator ? "Yes" : "No") +
        ", alive: " + (is_alive ? "Yes" : "No");
}


Animal::~Animal() {

}