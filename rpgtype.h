#pragma once
#include "weapon.h"
#include "armor.h"

class rpgtype {
public:
	string icon[17];
	string name;
	int maxhp, currenthp, atk, def;
	armor equipped[4];
	weapon weap;
	int loot;

	//constructors
	rpgtype();
	rpgtype(string name, string icon[17], int maxhp, int currenthp, int atk, int def, int loot);

	string get_icon(int i);
	void set_icon(string n[17]);

	void equip(armor e[4], armor a);
	void equipwep(weapon w);
	void newarmor(armor a);
	void set_weapon(weapon wep);


	//functions
	void heal();
};