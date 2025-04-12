#pragma once
#include<iostream>
#include<string>
using namespace std;

class Animal {
	
public:
	string name;
	int age;
	double weight;
	bool alive;
	bool is_predator;

	Animal(string nm) {
		name = nm;
		age = 0;
		weight = 0.0;
		alive = false;
		is_predator = false;
	}
	Animal(string nm, int a) {
		name = nm;
		age = a;
		weight = 0;
		alive = false;
		is_predator = false;
	}

	Animal(string nm, int a, double m, bool al, bool pred) {
		name = nm;
		age = a;
		weight = m;
		alive = al;
		is_predator = pred;
	}
	~Animal() {
	}

	string toString() {
		string s = "Name: " + name;
		s += (", age: " + to_string(age));
		s += ", weight: " + to_string(weight);
		s += ", alive: ";
		s += (alive ? "yes" : "not");
		s += ", predator: ";
		s += (is_predator ? "yes" : "not");
		return s;
	}
};