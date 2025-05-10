#include "Group.h"
Group::Group() {
	count = 0;
	list = nullptr;
}

Group::Group(Animal* list, int count) {
	if (list != nullptr && count > 0) {
		list = new Animal[count];
	}
	this->count = count;
	for (int i = 0; i < count; i++) {
		this->list[i] = list[i];
	}
	this->list = list;
}

Group::~Group() {
	if (list != nullptr) {
		delete[] list;
	}
}
Animal Group::getAnimal(int index) {
	if (index >= 0 && index <= count) {
		return list[index];
	}

	return Animal("", 0, 0, false, false);
}


void Group::set(Animal an1, Animal an2) {
	for (int i = 0; i < count; i++) {
		if (an1.getName() == list[i].getName()
			&& an1.getAge() == list[i].getAge()
			&& an1.getAlive() == list[i].getAlive()
			&& an1.getPredator() == list[i].getPredator()) {
			list[i] = an2;
		}
	}
}
void Group::set(int index, Animal an2) {
	if (index >= 0 && index <= count) {
		list[index] = an2;
	}
}
int Group::getCount() {
	return 0;
}
string Group::toString() {
	string s = "";
	for (int i = 0; i < count; i++) {
		s += list[i].toString();
	}
	return s;
}