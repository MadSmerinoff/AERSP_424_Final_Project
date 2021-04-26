/*
	WIS.cpp

	Created on: Apr 25, 2021
		Author: Robert
*/

#include "WIS.h"
#include "Skills.h"

WIS::WIS(char wis1, char wis2) : Skills() {

}

void WIS::SetSavingThrow(Character pCharacter, Class pClass) {

	if (pClass.getProfWis() == true) {
		WISSaveThrowMod = pCharacter.getWisMod() + 2;
	}
	else {
		WISSaveThrowMod = pCharacter.getWisMod();
	}
}

int WIS::getSavingThrow() {
	return WISSaveThrowMod;
}

int WIS::PrintSkillsWIS(Character pCharacter) {
	cout << "Wisdom Skill: " << endl;
	cout << "Saving Throw: " << WIS::getSavingThrow() << endl;
	cout << "Animal Handling: " << WIS::getAnimalHandlingMod(pCharacter) << endl;
	cout << "Insight: " << WIS::getInsightMod(pCharacter) << endl;
	cout << "Medicine: " << WIS::getMedicineMod(pCharacter) << endl;
	cout << "Perception: " << WIS::getPerceptionMod(pCharacter) << endl;
	cout << "Survival: " << WIS::getSurvivalMod(pCharacter) << endl;
	cout << "Passive Perception: " << WIS::getPassivePerception(pCharacter) << endl;
	cout << "Passive Insight: " << WIS::getPassiveInsight(pCharacter) << endl;
	cout << "----------" << endl;
	return 0;
}

//Setters and Getters for Skills
void WIS::setAnimalHandlingProf(bool AHP) {
	AnimalHandlingProf = AHP;
}
int WIS::getAnimalHandlingMod(Character pCharacter) {

	if (AnimalHandlingProf == true) {
		AnimalHandlingMod = pCharacter.getWisMod() + 2;
	}
	else {
		AnimalHandlingMod = pCharacter.getWisMod();
	}
	return AnimalHandlingMod;
}

void WIS::setInsightProf(bool IP) {
	InsightProf = IP;
}
int WIS::getInsightMod(Character pCharacter) {

	if (InsightProf == true) {
		InsightMod = pCharacter.getWisMod() + 2;
	}
	else {
		InsightMod = pCharacter.getWisMod();
	}
	return InsightMod;
}

void WIS::setMedicineProf(bool MP) {
	MedicineProf = MP;
}
int WIS::getMedicineMod(Character pCharacter) {

	if (MedicineProf == true) {
		MedicineMod = pCharacter.getWisMod() + 2;
	}
	else {
		MedicineMod = pCharacter.getWisMod();
	}
	return MedicineMod;
}

void WIS::setPerceptionProf(bool PP) {
	PerceptionProf = PP;
}
int WIS::getPerceptionMod(Character pCharacter) {

	if (PerceptionProf == true) {
		PerceptionMod = pCharacter.getWisMod() + 2;
	}
	else {
		PerceptionMod = pCharacter.getWisMod();
	}
	return PerceptionMod;
}

void WIS::setSurvivalProf(bool SP) {
	SurvivalProf = SP;
}
int WIS::getSurvivalMod(Character pCharacter) {

	if (SurvivalProf == true) {
		SurvivalMod = pCharacter.getWisMod() + 2;
	}
	else {
		SurvivalMod = pCharacter.getWisMod();
	}
	return SurvivalMod;
}

//Passive Skills

int WIS::getPassivePerception(Character pCharacter) {
	PassivePerception = WIS::getPerceptionMod(pCharacter) + 10;
	return PassivePerception;
}

int WIS::getPassiveInsight(Character pCharacter) {
	PassiveInsight = WIS::getInsightMod(pCharacter) + 10;
	return PassiveInsight;
}
