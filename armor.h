#pragma once
#include <string>
#include <iostream>

using namespace std;

class armor {
public:
	string name;
	int hpboost;
	int uplvl;
	int slot;
	int set;

	armor();
	armor(string name, int hpboost, int slot, int set);

	int get_hp();
};