/*
	DEX.cpp

	Created on: Apr 24, 2021
		Author: Robert
*/

#include "DEX.h"
#include "Skills.h"

DEX::DEX() : Skills(), Class(), Character(), Race() {

}

void DEX::SetSavingThrowDEX() {

	if (Class::getProfDex() == true) {

		DEXSaveThrowMod = Character::getDexMod() + 2;
	}
	else {

		DEXSaveThrowMod = Character::getDexMod();
	}

}

//Setters and Getters for Skills
void DEX::setAcrobaticsProf(bool AP) {
	AcrobaticsProf = AP;
}

int DEX::getAcrobaticsMod() {

	if (AcrobaticsProf == true) {
		AcrobaticsMod = Character::getDexMod() + 2;
	}
	else {
		AcrobaticsMod = Character::getDexMod();
	}
	return AcrobaticsMod;
}

void DEX::setSleightofHandProf(bool SP) {
	SleightofHandProf = SP;
}

int DEX::getSleightofHandMod() {

	if (SleightofHandProf == true) {
		SleightofHandMod = Character::getDexMod() + 2;
	}
	else {
		SleightofHandMod = Character::getDexMod();
	}
	return SleightofHandMod;
}

void DEX::setStealthProf(bool SP) {
	StealthProf = SP;
}

int DEX::getStealthMod() {

	if (StealthProf == true) {
		StealthMod = Character::getDexMod() + 2;
	}
	else {
		StealthMod = Character::getDexMod();
	}
	return StealthMod;
}
