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

	armor();
	armor(string name, int hpboost, int slot);

	int get_hp();
};