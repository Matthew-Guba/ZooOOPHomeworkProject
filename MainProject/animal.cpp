#include "animal.h"

Animal::Animal(const std::string& name, int age, double weight)
    : name(name), age(age), is_alive(true), weight(weight) {
}