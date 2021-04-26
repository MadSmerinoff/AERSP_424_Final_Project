/*
	INT.cpp

	Created on: Apr 24, 2021
		Author: Robert
*/


#include "INT.h"
#include "Skills.h"
#include "Class.h"
#include "Character.h"

INT::INT(int think) : Skills() {

}

void INT::SetSavingThrow(Character pCharacter, Class pClass) {

	if (pClass.getProfInt() == true) {

		INTSaveThrowMod = pCharacter.getIntMod() + 2;
	}
	else {

		INTSaveThrowMod = pCharacter.getIntMod();
	}

}

int INT::getSavingThrow() {
	return INTSaveThrowMod;
}

int INT::PrintSkillsINT(Character pCharacter) {
	cout << "Intelligence Skills: " << endl;
	cout << "Saving Throw: " << INT::getSavingThrow() << endl;
	cout << "Arcana: " << INT::getArcanaMod(pCharacter) << endl;
	cout << "History: " << INT::getHistoryMod(pCharacter) << endl;
	cout << "Investigation: " << INT::getInvestigationMod(pCharacter) << endl;
	cout << "Nature: " << INT::getNatureMod(pCharacter) << endl;
	cout << "Religion: " << INT::getReligionMod(pCharacter) << endl;
	cout << "Passive Investigation: " << INT::getPassiveInvestigation() << endl;
	cout << "----------" << endl;
	return 0;
}

//Setters and Getters for Skills
void INT::setArcanaProf(bool AP) {
	ArcanaProf = AP;
}
int INT::getArcanaMod(Character pCharacter) {

	if (ArcanaProf == true) {
		ArcanaMod = pCharacter.getIntMod() + 2;
	}
	else {
		ArcanaMod = pCharacter.getIntMod();
	}
	return ArcanaMod;
}

void INT::setHistoryProf(bool HP) {
	HistoryProf = HP;
}
int INT::getHistoryMod(Character pCharacter) {

	if (HistoryProf == true) {
		HistoryMod = pCharacter.getIntMod() + 2;
	}
	else {
		HistoryMod = pCharacter.getIntMod();
	}
	return HistoryMod;

}

void INT::setInvestigationProf(bool IP) {
	InvestigationProf = IP;
}
int INT::getInvestigationMod(Character pCharacter) {

	if (InvestigationProf == true) {
		InvestigationMod = pCharacter.getIntMod() + 2;
	}
	else {
		InvestigationMod = pCharacter.getIntMod();
	}
	return InvestigationMod;
}

void INT::setNatureProf(bool NP) {
	NatureProf = NP;
}
int INT::getNatureMod(Character pCharacter) {
	
	if (NatureProf == true) {
		NatureMod = pCharacter.getIntMod() + 2;
	}
	else {
		NatureMod = pCharacter.getIntMod();
	}
	return NatureMod;
}

void INT::setReligionProf(bool RP) {
	ReligionProf = RP;
}
int INT::getReligionMod(Character pCharacter) {

	if (ReligionProf == true) {
		ReligionMod = pCharacter.getIntMod() + 2;
	}
	else {
		ReligionMod = pCharacter.getIntMod();
	}
	return ReligionMod;
}

//Passive Skills

int INT::getPassiveInvestigation(Character pCharacter) {
	PassiveInvestigation = INT::getInvestigationMod(pCharacter) + 10;
	return PassiveInvestigation;
}
