#include "armor.h"

armor::armor() {
		name = "Default";
		hpboost = 0;
		uplvl = 0;
	}

armor::armor(string n, int hp) {
		uplvl = 0;
		name = n;
		hpboost = hp;
	}

int armor::get_hp() { return hpboost + uplvl; }