/*
		Constitution.cpp

		Created on: Apr 24, 2021
			Author: Robert
*/

#include "Constitution.h"
#include "Skills.h"

Constitution::Constitution(char cont) : Skills() {

}

void Constitution::SetSavingThrow() {

	if (Class::getProfCon() == true) {
		CONSaveThrowMod = Character::getDexMod() + 2;
	}
	else {
		CONSaveThrowMod = Character::getDexMod();
	}

}

int Constitution::getSavingThrow() {
	return CONSaveThrowMod;
}

int Constitution::PrintSkillsCON() {
	cout << "Constitution Skills:" << endl;
	cout << "Saving Throw: " << Constitution::getSavingThrow() << endl;
	cout << "----------" << endl;
}
