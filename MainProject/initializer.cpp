#include "initializer.h"
void Initializer::init(Animal*& list, int count) {
	if (list == nullptr && count > 0) {
		list = new Animal[count];
	}
	string names[]{ "Lion","Cow","Goat",
		"Frog","Crab","Tiger" };

	int minAge = 20;
	int maxAge = 80;

	double minWeight = 1.70;
	double maxWeight = 2.00;

	for (int i = 0; i < count; i++) {
		list[i].setName(names[rand() % 6]);
		list[i].setAge(rand() % (maxAge - minAge + 1) + minAge);
		double rawWeight = minWeight + static_cast<double>(rand()) / RAND_MAX * (maxWeight - minWeight);
		list[i].setWeight(floor(rawWeight * 100) / 100);



	}
};