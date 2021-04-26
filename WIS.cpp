/*
	WIS.cpp

	Created on: Apr 25, 2021
		Author: Robert
*/

#include "WIS.h"
#include "Skills.h"

WIS::WIS(char wis1, char wis2) : Skills() {

}

void WIS::SetSavingThrow() {

	if (Class::getProfWis() == true) {
		WISSaveThrowMod = Character::getWisMod() + 2;
	}
	else {
		WISSaveThrowMod = Character::getWisMod();
	}
}

int WIS::getSavingThrow() {
	return WISSaveThrowMod;
}

int WIS::PrintSkillsWIS() {
	cout << "Wisdom Skill: " << endl;
	cout << "Saving Throw: " << WIS::getSavingThrow() << endl;
	cout << "Animal Handling: " << WIS::getAnimalHandlingMod() << endl;
	cout << "Insight: " << WIS::getInsightMod() << endl;
	cout << "Medicine: " << WIS::getMedicineMod() << endl;
	cout << "Perception: " << WIS::getPerceptionMod() << endl;
	cout << "Survival: " << WIS::getSurvivalMod() << endl;
	cout << "Passive Perception: " << WIS::getPassivePerception() << endl;
	cout << "Passive Insight: " << WIS::getPassiveInsight() << endl;
	cout << "----------" << endl;
	return 0;
}

//Setters and Getters for Skills
void WIS::setAnimalHandlingProf(bool AHP) {
	AnimalHandlingProf = AHP;
}
int WIS::getAnimalHandlingMod() {

	if (AnimalHandlingProf == true) {
		AnimalHandlingMod = Character::getWisMod() + 2;
	}
	else {
		AnimalHandlingMod = Character::getWisMod();
	}
	return AnimalHandlingMod;
}

void WIS::setInsightProf(bool IP) {
	InsightProf = IP;
}
int WIS::getInsightMod() {

	if (InsightProf == true) {
		InsightMod = Character::getWisMod() + 2;
	}
	else {
		InsightMod = Character::getWisMod();
	}
	return InsightMod;
}

void WIS::setMedicineProf(bool MP) {
	MedicineProf = MP;
}
int WIS::getMedicineMod() {

	if (MedicineProf == true) {
		MedicineMod = Character::getWisMod() + 2;
	}
	else {
		MedicineMod = Character::getWisMod();
	}
	return MedicineMod;
}

void WIS::setPerceptionProf(bool PP) {
	PerceptionProf = PP;
}
int WIS::getPerceptionMod() {

	if (PerceptionProf == true) {
		PerceptionMod = Character::getWisMod() + 2;
	}
	else {
		PerceptionMod = Character::getWisMod();
	}
	return PerceptionMod;
}

void WIS::setSurvivalProf(bool SP) {
	SurvivalProf = SP;
}
int WIS::getSurvivalMod() {

	if (SurvivalProf == true) {
		SurvivalMod = Character::getWisMod() + 2;
	}
	else {
		SurvivalMod = Character::getWisMod();
	}
	return SurvivalMod;
}

//Passive Skills

int WIS::getPassivePerception() {
	PassivePerception = WIS::getPerceptionMod() + 10;
	return PassivePerception;
}

int WIS::getPassiveInsight() {
	PassiveInsight = WIS::getInsightMod() + 10;
	return PassiveInsight;
}
