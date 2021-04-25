/*
	INT.cpp

	Created on: Apr 24, 2021
		Author: Robert
*/


#include "INT.h"
#include "Skills.h"

INT::INT(int think) : Skills() {

}

void INT::SetSavingThrow() {

	if (Class::getProfInt() == true) {

		INTSaveThrowMod = Character::getIntMod() + 2;
	}
	else {

		INTSaveThrowMod = Character::getIntMod();
	}

}

int INT::getSavingThrow() {
	return INTSaveThrowMod;
}

//Setters and Getters for Skills
void INT::setArcanaProf(bool AP) {
	ArcanaProf = AP;
}
int INT::getArcanaMod() {

	if (ArcanaProf == true) {
		ArcanaMod = Character::getIntMod() + 2;
	}
	else {
		ArcanaMod = Character::getIntMod();
	}
	return ArcanaMod;
}

void INT::setHistoryProf(bool HP) {
	HistoryProf = HP;
}
int INT::getHistoryMod() {

	if (HistoryProf == true) {
		HistoryMod = Character::getIntMod() + 2;
	}
	else {
		HistoryMod = Character::getIntMod();
	}
	return HistoryMod;

}

void INT::setInvestigationProf(bool IP) {
	InvestigationProf = IP;
}
int INT::getInvestigationMod() {

	if (InvestigationProf == true) {
		InvestigationMod = Character::getIntMod() + 2;
	}
	else {
		InvestigationMod = Character::getIntMod();
	}
	return InvestigationMod;
}

void INT::setNatureProf(bool NP) {
	NatureProf = NP;
}
int INT::getNatureMod() {
	
	if (NatureProf == true) {
		NatureMod = Character::getIntMod() + 2;
	}
	else {
		NatureMod = Character::getIntMod();
	}
	return NatureMod;
}

void INT::setReligionProf(bool RP) {
	ReligionProf = RP;
}
int INT::getReligionMod() {

	if (ReligionProf == true) {
		ReligionMod = Character::getIntMod() + 2;
	}
	else {
		ReligionMod = Character::getIntMod();
	}
	return ReligionMod;
}

//Passive Skills

int INT::getPassiveInvestigation() {
	PassiveInvestigation = INT::getInvestigationMod() + 10;
	return PassiveInvestigation;
}
