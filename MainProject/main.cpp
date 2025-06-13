#include "zoo.h"
#include "lion.h"
#include "tiger.h"
#include "elephant.h"
#include "monkey.h"
#include "giraffe.h"
#include "zebra.h"
#include<iostream>
int main() {
    Zoo zoo;

    // Add all animals to the zoo
    zoo.addAnimal(new Lion("Simba", 5, 190.5, 25.0));
    zoo.addAnimal(new Tiger("Tony", 8, 220.0, 7.5));
    zoo.addAnimal(new Elephant("Dumbo", 15, 6000.0, 120.5));
    zoo.addAnimal(new Monkey("George", 8, 45.0, true));
    zoo.addAnimal(new Giraffe("Melman", 12, 800.0, 2.1));
    zoo.addAnimal(new Zebra("Marty", 7, 350.0, 42));

    // Display zoo information
    zoo.listAnimals();
    zoo.makeAllSounds();

    std::cout << "\nTotal animals in zoo: " << zoo.getAnimalCount() << std::endl;

    return 0;
}