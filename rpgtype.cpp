#include "rpgtype.h"

	//constructors
rpgtype::rpgtype() {
	    icon[0] = "                      ";
	    icon[1] = "                      ";
		icon[2] = "                      ";
		icon[3] = "                      ";
		icon[4] = "                      ";
		icon[5] = "                 ;.   ";
		icon[6] = "  Your Rooster  (\\(\\) ";
		icon[7] = ";_              ;  o >"; //3
		icon[8] = " {`-.          /  (_) ";
		icon[9] = " `={\\`-._____/`   |   ";
		icon[10] = "  `-{ /    -=`\\   |   "; //6
		icon[11] = "   `={  -= = _/   /   ";
		icon[12] = "      `\\  .-'   /`    ";
		icon[13] = "       {`-;__.'===;_  "; //9
		icon[14] = "       //`        `\\\\ ";
		icon[15] = "      //              ";
		icon[16] = "     \\\\=            "; //12
		name = "Rooster";
		maxhp = 5;
		currenthp = maxhp;
		atk = 1;
		def = 0;
		armor equipped[4] = { armor(), armor(), armor(), armor() };
	}

rpgtype::rpgtype(string name, string icon[17], int maxhp, int currenthp, int atk, int def, int loot) {
		for (int i = 0; i < 17; i++) { this->icon[i] = icon[i]; }
		this->name = name;
		this->maxhp = maxhp; 
		this->currenthp = currenthp;
		this->atk = atk;
		this->def = def;
		this->loot = loot;
		armor equipped[4] = { armor(), armor(), armor(), armor() };
	}
	//arrays
	string rpgtype::get_icon(int i) { return icon[i]; }
	void rpgtype::set_icon(string n[17]) { for (int i = 0; i < 17; i++) icon[i] = n[i]; }

	void rpgtype::equip(armor e[4], armor a) {
		int temp = maxhp;
		bool wasset = false, nowset = false;
		if (a.set == e[0].set && e[0].set == e[1].set && e[1].set == e[2].set && e[2].set == e[3].set) wasset = true;
		if (e[0].set == e[1].set && e[1].set == e[2].set && e[2].set == e[3].set) nowset = true;

		if (wasset && !nowset) def -= a.set;
		else if (!wasset && nowset) def += e[0].set;

		maxhp = e[0].get_hp() + e[1].get_hp() + e[2].get_hp() + e[3].get_hp() + 5;
		currenthp = maxhp - (temp - currenthp);
	}
	void rpgtype::equipwep(weapon w) { atk = w.get_atk() + 1; }
	void rpgtype::newarmor(armor a) { 
		armor temp = equipped[a.slot];
		equipped[a.slot] = a;
		equip(equipped, temp);
	}
	void rpgtype::set_weapon(weapon wep) { weap = wep; equipwep(weap); }


	//functions
	void rpgtype::heal() { currenthp = maxhp; }