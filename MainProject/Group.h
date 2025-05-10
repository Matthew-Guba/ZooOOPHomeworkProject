#pragma once
#include"animals.h"
class Group
{
private:
	Animal* list;
	int count;
public:
	Group();
	Group(Animal* list, int count);
	~Group();

	Animal getAnimal(int index);
	void add(Animal animal);
	void remove(Animal animal);
	void remove(int index);
	void set(Animal an1, Animal an2);
	void set(int index, Animal an2);
	int getCount();
	string toString();
};