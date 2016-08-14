#pragma once
#include <string>
#include <iostream>

using namespace std;

class armor {
public:
	string name;
	int hpboost;
	int uplvl;

	armor();
	armor(string name, int hpboost);

	int get_hp();
};