#pragma once
#include "weapon.h"
#include "armor.h"

class rpgtype {
public:
	string icon[12];
	string name;
	int maxhp, currenthp, atk, def;
	armor equipped[4];
	weapon weap;
	int loot;

	//constructors
	rpgtype();
	rpgtype(string name, string icon[12], int maxhp, int currenthp, int atk, int def, int loot);

	string get_icon(int i);
	void set_icon(string n[12]);

	void equip(armor e[4]);
	void equipwep(weapon w);
	void newarmor(armor a);
	void set_weapon(weapon wep);


	//functions
	void heal();
};