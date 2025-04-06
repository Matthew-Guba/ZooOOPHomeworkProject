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

	for (int i = 0; i <= quanity; i++) {
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


		if (alive == "yes") {
			an[i].alive = true;
		}
		else{
			an[i].alive = false;
		}
		

		string is_predator;
		cout << "Is animal a predator(type yes or not): ";
		cin >> an[i].is_predator;


		if (is_predator == "yes") {
			an[i].is_predator = true;
		}
		else {
			an[i].is_predator = false;
		}
		
		cout << endl;
	}


	return 0;
}