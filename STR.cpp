/*
	STR.cpp

	Created on: Apr 24, 2021
		Author: Robert
*/

#include "STR.h"
#include "Skills.h"
#include "Class.h"
#include "Race.h"
#include "Character.h"

STR::STR() : Skills(), Character(), Race() {
	
}

void STR::SetSavingThrowSTR() {
	//Calculation Things, need to reference other things
	
	if (Class::getProfStr() == true) {

		STRSaveThrowMod = Character::getStrMod() + 2;
	}
	else {

		STRSaveThrowMod = Character::getStrMod();
	}
	
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
