/*
	STR.cpp

	Created on: Apr 24, 2021
		Author: Robert
*/

#include "STR.h"
#include "Skills.h"

STR::STR() {

}

int STR::SavingThrow() {

	//Calculation Things, need to reference other things
	return STRSavingThrowMod;
}

int STR::Check() {

	//Returns STR modifier, need to link to other classes
}

int STR::Athletics() {

	//Checks for proficiency, adds STRMOD
	return AthleticsMod;
}
