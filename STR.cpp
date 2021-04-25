/*
	STR.cpp

	Created on: Apr 24, 2021
		Author: Robert
*/

#include "STR.h"
#include "Skills.h"


STR::STR(float str) : Skills(), Character(), Race() {
	
}

void STR::SetSavingThrow() {
	
	if (Class::getProfStr() == true) {

		STRSaveThrowMod = Character::getStrMod() + 2;
	}
	else {

		STRSaveThrowMod = Character::getStrMod();
	}
	
}

int STR::getSavingThrow() {
	return STRSaveThrowMod;
}

void STR::setAthleticsProf(bool AP) {
	AthleticsProf = AP;
}

int STR::getAthleticsMod() {

	if (AthleticsProf == true) {
		AthleticsMod = Character::getStrMod() + 2;
	}
	else {
		AthleticsMod = Character::getStrMod();
	}

	return AthleticsMod;
}
