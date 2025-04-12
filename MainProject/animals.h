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