#include "manager.h"
Animal Manager::getOldestAnimal(Animal* list, int count) {
    if (count == 0) return Animal();
    Animal oldest = list[0];
    for (int i = 1; i < count; i++) {
        if (list[i].getAge() > oldest.getAge()) {
            oldest = list[i];
        }
    }
    return oldest;
}