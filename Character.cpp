#include "Character.h"
#include "Race.h"
#include "Class.h"

Character::Character(){
	strAbil = 0;
	dexAbil = 0;
	conAbil = 0;
	intAbil = 0;
	wisAbil = 0;
	chrAbil = 0;
	strMod = 0;
	dexMod = 0;
	conMod = 0;
	intMod = 0;
	wisMod = 0;
	chrMod = 0;
	profBonus = 2;

	charRace = Race();
	charClass = Class();
}

void Character::setStrAbil(int a) {
	strAbil = a;
}

int Character::getStrAbil() {
	return strAbil;
}

void Character::setDexAbil(int a) {
	dexAbil = a;
}

int Character::getDexAbil() {
	return dexAbil;
}

void Character::setConAbil(int a) {
	conAbil = a;
}

int Character::getConAbil() {
	return conAbil;
}

void Character::setIntAbil(int a) {
	intAbil = a;
}

int Character::getIntAbil() {
	return intAbil;
}

void Character::setWisAbil(int a) {
	wisAbil = a;
}

int Character::getWisAbil() {
	return wisAbil;
}

void Character::setChrAbil(int a) {
	chrAbil = a;
}

int Character::getChrAbil() {
	return chrAbil;
}

void Character::calculateModifiers() {
	int check;
	check = (strAbil - 10) % 2;
	if (check == 1)
		strMod = (strAbil - 11) / 2;
	else
		strMod = (strAbil - 10) / 2;

	check = (dexAbil - 10) % 2;
	if (check == 1)
		dexMod = (dexAbil - 11) / 2;
	else
		dexMod = (dexAbil - 10) / 2;

	check = (conAbil - 10) % 2;
	if (check == 1)
		conMod = (conAbil - 11) / 2;
	else
		conMod = (conAbil - 10) / 2;

	check = (intAbil - 10) % 2;
	if (check == 1)
		intMod = (intAbil - 11) / 2;
	else
		intMod = (intAbil - 10) / 2;

	check = (wisAbil - 10) % 2;
	if (check == 1)
		wisMod = (wisAbil - 11) / 2;
	else
		wisMod = (wisAbil - 10) / 2;

	check = (chrAbil - 10) % 2;
	if (check == 1)
		chrMod = (chrAbil - 11) / 2;
	else
		chrMod = (chrAbil - 10) / 2;
}


int Character::getDexMod() {
	return dexMod;
}

int Character::getConMod() {
	return conMod;
}

int Character::getWisMod() {
	return wisMod;
}


void Character::setHP(int h) {
	hp = h;
}

int Character::getHP() {
	return hp;
}

void Character::setAC(int a) {
	ac = a;
}

int Character::getAC() {
	return ac;
}

void Character::setRace(Race r) {
	charRace = r;
}

void Character::setClass(Class c) {
	charClass = c;
}
