/*
	STR.cpp

	Created on: Apr 24, 2021
		Author: Robert
*/

#include "STR.h"
#include "Skills.h"

#include "Class.h"
#include "Character.h"


STR::STR(float str) : Skills() {
	
}

void STR::SetSavingThrow(Class pClass, Character pCharacter) {
	
	if (pClass.getProfStr() == true) {

		STRSaveThrowMod = pCharacter.getStrMod() + 2;
	}
	else {

		STRSaveThrowMod = pCharacter.getStrMod();
	}
	
}

int STR::getSavingThrow() {
	return STRSaveThrowMod;
}

int STR::PrintSkillsSTR() {
	cout << "Strength Skills: " << endl;
	cout << "Saving Throw: " << STR::getSavingThrow() << endl;
	cout << "Athletics: " << STR::getAthleticsMod() << endl;
	cout << "----------" << endl;
	return 0;
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
