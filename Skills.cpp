/*
	Skills.cpp

	Created on Apr 24, 2021
		Author: Robert
*/

#include <iostream>
#include "Skills.h"
#include "Class.h"
#include "Race.h"
#include "Character.h"

#include <map>

Skills::Skills() : Class(), Character(), Race() {

}

void Skills::SetSavingThrow() {
	cout << "This is not an ability \n";
}
int Skills::getSavingThrow() {
	return -20;
}
