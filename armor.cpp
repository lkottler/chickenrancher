#include "armor.h"

armor::armor() {
		name = "Default";
		hpboost = 0;
		uplvl = 0;
	}

armor::armor(string n, int hp, int slot, int set) {
		uplvl = 0;
		name = n;
		hpboost = hp;
		this->slot = slot;
		this->set = set;
	}

int armor::get_hp() { return hpboost + uplvl; }