#include "Character.h"

Character::Character() {
	strAbil, dexAbil, conAbil, intAbil, wisAbil, chrAbil = 0;
	strMod, dexMod, conMod, intMod, wisMod, chrMod = 0;
	profBonus = 2;
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
