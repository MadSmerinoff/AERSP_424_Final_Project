#include "Class.h"

Class::Class() {
	hitDice = 0;
	profStr = false;
	profDex = false;
	profCon = false;
	profInt = false;
	profWis = false;
	profChr = false;
	saveModStr = 0;
	saveModDex = 0;
	saveModCon = 0;
	saveModInt = 0;
	saveModWis = 0;
	saveModChr = 0;
	classFeatures = "Null";
	spellList = "Cleric Cantrips: Guidance, Light, Mending, Sacred Flame, Spare the Dying, Thaumaturgy\n\n1st Level Spells: Bane, Bless, Command, Create of Destroy Water, Cure Wounds, Detect Good and Evil, Detect Magic, Detect Poison and Disease, Guiding Bolt, Healing Word, Inflict Wounds, Protection from Good and Evil, Purify Food and Drink, Sanctuary, and Shield of Faith\n\nSee Player's Handbook for more details.";
	gold = 0;
}

void Class::setHitDice(int h) {
	hitDice = h;
}

int Class::getHitDice() {
	return hitDice;
}

void Class::setProfStr(bool p) {
	profStr = p;
}

bool Class::getProfStr() {
	return profStr;
}

void Class::setProfDex(bool p) {
	profDex = p;
}

bool Class::getProfDex() {
	return profDex;
}

void Class::setProfCon(bool p){
	profCon = p;
}

bool Class::getProfCon() {
	return profCon;
}

void Class::setProfInt(bool p){
	profInt = p;
}

bool Class::getProfInt() {
	return profInt;
}

void Class::setProfWis(bool p) {
	profWis = p;
}

bool Class::getProfWis() {
	return profWis;
}

void Class::setProfChr(bool p) {
	profChr = p;
}

bool Class::getProfChr() {
	return profChr;
}


void Class::calcSaveMods(int s, int d, int c, int i, int w, int r) {
	if (profStr == true)
		saveModStr = s + 2;
	else
		saveModStr = s;

	if (profDex == true)
		saveModDex = d + 2;
	else
		saveModDex = d;

	if (profCon == true)
		saveModCon = c + 2;
	else
		saveModCon = c;

	if (profInt == true)
		saveModInt = i + 2;
	else
		saveModInt = i;

	if (profWis == true)
		saveModWis = w + 2;
	else
		saveModWis = w;

	if (profStr == true)
		saveModChr = r + 2;
	else
		saveModChr = r;
}

int Class::getSaveModStr() {
	return saveModStr;
}

int Class::getSaveModDex() {
	return saveModDex;
}

int Class::getSaveModCon() {
	return saveModCon;
}

int Class::getSaveModInt() {
	return saveModInt;
}

int Class::getSaveModWis() {
	return saveModWis;
}

int Class::getSaveModChr() {
	return saveModChr;
}

void Class::setClassFeatures(string f) {
	classFeatures = f;
}

string Class::getClassFeatures() {
	return classFeatures;
}


string Class::getSpellList() {
	return spellList;
}

void Class::setGold(int g) {
	gold = g;
}

int Class::getGold() {
	return gold;
}
