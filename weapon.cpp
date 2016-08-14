#include "weapon.h"

weapon::weapon() {
		name = "Default";
		dmgboost = 0;
		uplvl = 0;
	}
weapon::weapon(string n, int dmg) {
		name = n;
		dmgboost = dmg;
		uplvl = 0;
	}

int weapon::get_atk() { return dmgboost + uplvl; }