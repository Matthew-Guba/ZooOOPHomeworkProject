#include "zoo.h"
#include "lion.h"
#include "elephant.h"
#include "tiger.h"
#include "giraffe.h"
#include "zebra.h"
#include <iostream>

using namespace std;

int main() {
    Zoo zoo;

    // Add animals
    zoo.addAnimal(new Lion("Simba", 5, 190.5));
    zoo.addAnimal(new Lion("Nala", 4, 160.0));
    zoo.addAnimal(new Elephant("Dumbo", 10, 5000.0));
    zoo.addAnimal(new Tiger("Rajah", 6, 220.0));
    zoo.addAnimal(new Giraffe("Melman", 8, 1200.0));
    zoo.addAnimal(new Zebra("Marty", 7, 350.0));

    // Display zoo information
    cout << "Zoo contains " << zoo.getAnimalCount() << " animals:\n";
    cout << zoo.listAnimals() << endl;
    cout << "Sounds:\n" << zoo.makeAllSounds() << endl;

    return 0;
}