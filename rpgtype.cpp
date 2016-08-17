#include "rpgtype.h"

	//constructors
rpgtype::rpgtype() {
		icon[0] = "                 ;.   ";
		icon[1] = "  Your Rooster  (\\(\\) ";
		icon[2] = ";_              ;  o >"; //3
		icon[3] = " {`-.          /  (_) ";
		icon[4] = " `={\\`-._____/`   |   ";
		icon[5] = "  `-{ /    -=`\\   |   "; //6
		icon[6] = "   `={  -= = _/   /   ";
		icon[7] = "      `\\  .-'   /`    ";
		icon[8] = "       {`-;__.'===;_  "; //9
		icon[9] = "       //`        `\\\\ ";
		icon[10] = "      //              ";
		icon[11] = "     \\\\=            "; //12
		name = "Rooster";
		maxhp = 5;
		currenthp = maxhp;
		atk = 1;
		def = 0;
		armor equipped[4] = { armor(), armor(), armor(), armor() };
	}

rpgtype::rpgtype(string name, string icon[12], int maxhp, int currenthp, int atk, int def, int loot) {
		for (int i = 0; i < 11; i++) { this->icon[i] = icon[i]; }
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
	void rpgtype::set_icon(string n[12]) { for (int i = 0; i < 12; i++) icon[i] = n[i]; }

	void rpgtype::equip(armor e[4]) {
		int temp = maxhp;
		maxhp = e[0].get_hp() + e[1].get_hp() + e[2].get_hp() + e[3].get_hp() + 5;
		currenthp = maxhp - (temp - currenthp);
	}
	void rpgtype::equipwep(weapon w) { atk = w.get_atk() + 1; }
	void rpgtype::newarmor(armor a) { this->equipped[a.slot] = a; equip(this->equipped); }
	void rpgtype::set_weapon(weapon wep) { weap = wep; equipwep(weap); }


	//functions
	void rpgtype::heal() { currenthp = maxhp; }