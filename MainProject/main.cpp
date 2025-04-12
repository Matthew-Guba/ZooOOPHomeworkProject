#include "animals.h"

int main() {

	int quanity;

	cout << "Enter the number of animals: ";
	cin >> quanity;

	if (quanity <= 0) {
		cout << "Invalid data.";
		return -1;
	}

	Animal* an = new Animal[quanity];

	for (int i = 0; i < quanity; i++) {
		cout << "Enter data of " << i + 1 << " animal: " << endl;

		cout << "Name: ";
		cin >> an[i].name;

		cout << "Age: ";
		cin >> an[i].age;

		cout << "Weight: ";
		cin >> an[i].weight;

		string alive;
		cout << "Alive or not(type yes or not): ";
		cin >> alive;


		alive == "yes" ? (an[i].alive = 1) : (an[i].alive = 0);
		

		string is_predator;
		cout << "Is animal a predator(type yes or not): ";
		cin >> is_predator;


		is_predator == "yes" ? (an[i].is_predator = 1) : (an[i].is_predator = 0);

		cout << endl;
		cout << an->toString() << endl;
	}


	return 0;
}