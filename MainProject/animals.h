#include <iostream>
#include <string>
#include <iomanip>
#include <sstream>  
using namespace std;

class Animal {
	
private:
	string name;
	int age;
	double weight;
	bool is_alive;
	bool is_predator;
public:


	Animal() :Animal("nn", 20, 2000.21, true, true) {}
	Animal(string nm) :Animal(nm, 20, 2000.21, true, true) {}
	Animal(string nm, int age) : Animal(nm, age, 2000.21, true, true) {}
	Animal(string nm, int age, double weight, bool is_predator, bool is_alive)
		: name(nm), age(age), weight(weight), is_predator(is_predator), is_alive(is_alive) {
	}

	Animal(const Animal& animal) : Animal(animal.name, animal.age, animal.weight, animal.is_predator, animal.is_alive) {}



	~Animal();
	string getName();
	void setName(string name);
	int getAge();
	void setAge(int age);
	double getWeight();
	void setWeight(double weight);
	bool getPredator() const { return is_predator; }
	void setPredator(bool pred) { is_predator = pred; }
	bool getAlive() const { return is_alive; }
	void setAlive(bool al) { is_alive = al; }

	string toString() const;

};