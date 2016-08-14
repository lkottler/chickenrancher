#pragma once
#include <string>
#include <iostream>

using namespace std;

class weapon {
public:
	string name;
	int dmgboost;
	int uplvl;

	weapon();
	weapon(string name, int dmgboost);

	int get_atk();
};