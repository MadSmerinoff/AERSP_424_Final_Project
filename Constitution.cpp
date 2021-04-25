/*
		Constitution.cpp

		Created on: Apr 24, 2021
			Author: Robert
*/

#include "Constitution.h"
#include "Skills.h"

Constitution::Constitution() : Skills(), Character(), Class(), Race() {

}

void Constitution::SetSavingThrowCON() {

	if (Class::getProfCon() == true) {
		CONSaveThrowMod = Character::getDexMod() + 2;
	}
	else {
		CONSaveThrowMod = Character::getDexMod();
	}

}
