#include "armor.h"

armor::armor() {
		name = "Default";
		hpboost = 0;
		uplvl = 0;
	}

armor::armor(string n, int hp, int slot) {
		uplvl = 0;
		name = n;
		hpboost = hp;
		this->slot = slot;
	}

int armor::get_hp() { return hpboost + uplvl; }