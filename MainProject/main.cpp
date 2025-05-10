#include "Manager.h"

int main() {
	int count;

	cout << "Input number of animals: ";
	cin >> count;

	Animal* list = nullptr;

	Initializer initializer;
	Manager manager;

	initializer.init(list, count);

	cout << "List of animals:\n";
	for (int i = 0; i < count; i++)
	{
		cout << list[i].toString() << endl;
	}

	int size = 0;
	Animal* oldestList = manager.getOldestAnimal(list, count, &size);

	cout << "\nList of oldest animals:\n";
	for (int i = 0; i < size; i++)
	{
		cout << oldestList[i].toString() << endl;
	}

	Animal* youngestList = manager.getYoungestAnimal(list, count, &size);

	cout << "\nList of youngest animals:\n";
	for (int i = 0; i < size; i++)
	{
		cout << youngestList[i].toString() << endl;
	}

	delete[] list;
	delete[] youngestList;
	delete[] oldestList;

	return 0;
}