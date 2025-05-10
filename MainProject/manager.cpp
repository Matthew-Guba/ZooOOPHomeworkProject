#include "Manager.h"


Animal* Manager::getOldestAnimal(Animal* list, int count1, int* count2) {
	*count2 = 0;

	for (int i = 0; i < count1; i++)
	{
		if (list[i].getAge() >= 100) {
			++*count2;
		}
	}

	Animal* oldest = new Animal[*count2];

	for (int i = 0, j = 0; i < count1; i++)
	{
		if (list[i].getAge() >= 100) {
			oldest[j] = list[i];
			j++;
		}
	}

	return oldest;
}

Animal* Manager::getYoungestAnimal(Animal* list, int count1, int* count2) {
	*count2 = 0;

	for (int i = 0; i < count1; i++)
	{
		if (list[i].getAge() <= 50) {
			++*count2;
		}
	}

	Animal* youngest = new Animal[*count2];

	for (int i = 0, j = 0; i < count1; i++)
	{
		if (list[i].getAge() <= 50) {
			youngest[j] = list[i];
			j++;
		}
	}

	return youngest;
}