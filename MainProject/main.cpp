#include "animals.h"

int main(void) {
	string name;
	int age;
	double weight;
	bool is_predator, is_alive;

	cout << "Input name of your animal: ";
	cin >> name;

	cout << "Input is your animal a predator(yes = 1 or no = 0): ";
	cin >> is_predator;

	cout << "Input age of your animal: ";
	cin >> age;

	cout << "Input weight of your animal: ";
	cin >> weight;

	cout << "Input is your animal alive(yes = 1 or no = 0): ";
	cin >> is_alive;

	Animal an1(name);
	Animal an2(name, age);
	Animal an3(name, age, weight, is_alive, is_predator);
	cout << "\nInfo about your animal:" << endl;

	cout << "Constructor with 1 argument..." << endl;
	cout << an1.toString() << endl<<endl;

	cout << "Constructor with 2 arguments..." << endl;
	cout << an2.toString() << endl<<endl;

	cout << "Constructor with all discription..." << endl;
	cout << an3.toString() << endl;
	return 0;
}
