/*
	CHA.cpp

	Created on: Apr 25, 2021
		Author: Robert
*/

#include "CHA.h"
#include "Skills.h"
#include "Character.h"
#include "Class.h"

CHA::CHA(bool cha1) : Skills() {

}

void CHA::SetSavingThrow(Class pClass, Character pCharacter) {

	if (pClass.getProfChr() == true) {
		CHASaveThrowMod = pCharacter.getCharMod() + 2;
	}
	else {
		CHASaveThrowMod = pCharacter.getCharMod();
	}
}

int CHA::getSavingThrow() {
	return CHASaveThrowMod;
}

int CHA::PrintSkillsCHA(Character pCharacter) {
	cout << "Charisma Skills: " << endl;
	cout << "Saving Throw: " << CHA::getSavingThrow() << endl;
	cout << "Deception: " << CHA::getDeceptionMod(pCharacter) << endl;
	cout << "Intimidation: " << CHA::getIntimidationMod(pCharacter) << endl;
	cout << "Performance: " << CHA::getPerformanceMod(pCharacter) << endl;
	cout << "Persuasion: " << CHA::getPersuasionMod(pCharacter) << endl;
	cout << "----------" << endl;
	return 0;
}

//Setters and Getters for Skills
void CHA::setDeceptionProf(bool DP) {
	DeceptionProf = DP;
}
int CHA::getDeceptionMod(Character pCharacter) {

	if (DeceptionProf == true) {
		DeceptionMod = pCharacter.getCharMod() + 2;
	}
	else {
		DeceptionMod = pCharacter.getCharMod();
	}
	return DeceptionMod;
}

void CHA::setIntimidationProf(bool IP) {
	IntimidationProf = IP;
}
int CHA::getIntimidationMod(Character pCharacter) {

	if (IntimidationProf == true) {
		IntimidationMod = pCharacter.getCharMod() + 2;
	}
	else {
		IntimidationMod = pCharacter.getCharMod();
	}
	return IntimidationMod;
}

void CHA::setPerformanceProf(bool PP) {
	PerformanceProf = PP;
}
int CHA::getPerformanceMod(Character pCharacter) {

	if (PerformanceProf == true) {
		PerformanceMod = pCharacter.getCharMod() + 2;
	}
	else {
		PerformanceMod = pCharacter.getCharMod();
	}
	return PerformanceMod;
}

void CHA::setPersuasionProf(bool PeP) {
	PersuasionProf = PeP;
}
int CHA::getPersuasionMod(Character pCharacter) {

	if (PersuasionProf == true) {
		PersuasionMod = pCharacter.getCharMod() + 2;
	}
	else {
		PersuasionMod = pCharacter.getCharMod();
	}
	return PersuasionMod;
}
