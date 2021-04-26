/*
	CHA.cpp

	Created on: Apr 25, 2021
		Author: Robert
*/

#include "CHA.h"
#include "Skills.h"

CHA::CHA(bool cha1) : Skills() {

}

void CHA::SetSavingThrow() {

	if (Class::getProfChr() == true) {
		CHASaveThrowMod = Character::getCharMod() + 2;
	}
	else {
		CHASaveThrowMod = Character::getCharMod();
	}
}

int CHA::getSavingThrow() {
	return CHASaveThrowMod;
}

int CHA::PrintSkillsCHA() {
	cout << "Charisma Skills: " << endl;
	cout << "Saving Throw: " << CHA::getSavingThrow() << endl;
	cout << "Deception: " << CHA::getDeceptionMod() << endl;
	cout << "Intimidation: " << CHA::getIntimidationMod() << endl;
	cout << "Performance: " << CHA::getPerformanceMod() << endl;
	cout << "Persuasion: " << CHA::getPersuasionMod() << endl;
	cout << "----------" << endl;
}

//Setters and Getters for Skills
void CHA::setDeceptionProf(bool DP) {
	DeceptionProf = DP;
}
int CHA::getDeceptionMod() {

	if (DeceptionProf == true) {
		DeceptionMod = Character::getCharMod() + 2;
	}
	else {
		DeceptionMod = Character::getCharMod();
	}
	return DeceptionMod;
}

void CHA::setIntimidationProf(bool IP) {
	IntimidationProf = IP;
}
int CHA::getIntimidationMod() {

	if (IntimidationProf == true) {
		IntimidationMod = Character::getCharMod() + 2;
	}
	else {
		IntimidationMod = Character::getCharMod();
	}
	return IntimidationMod;
}

void CHA::setPerformanceProf(bool PP) {
	PerformanceProf = PP;
}
int CHA::getPerformanceMod() {

	if (PerformanceProf == true) {
		PerformanceMod = Character::getCharMod() + 2;
	}
	else {
		PerformanceMod = Character::getCharMod();
	}
	return PerformanceMod;
}

void CHA::setPersuasionProf(bool PeP) {
	PersuasionProf = PeP;
}
int CHA::getPersuasionMod() {

	if (PersuasionProf == true) {
		PersuasionMod = Character::getCharMod() + 2;
	}
	else {
		PersuasionMod = Character::getCharMod();
	}
	return PersuasionMod;
}
