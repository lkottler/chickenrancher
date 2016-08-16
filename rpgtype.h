#pragma once
#include "weapon.h"
#include "armor.h"

class rpgtype {
public:
	string icon[12];
	string name;
	int maxhp, currenthp, atk, def;
	armor chestplate, helmet, boots, pants;
	weapon weap;
	int loot;

	//constructors
	rpgtype();
	rpgtype(string name, string icon[12], int maxhp, int currenthp, int atk, int def, int loot);

	string get_icon(int i);
	void set_icon(string n[12]);

	void equip(armor c, armor h, armor b, armor p);
	void equipwep(weapon w);

	void set_chest(armor chest);
	void set_legs(armor legs);
	void set_boots(armor booties);
	void set_helm(armor helm);
	void set_weapon(weapon wep);

	//functions
	void heal();
};