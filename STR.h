/*
	STR.h

	Created on: Apr 24, 2021
		Author: Robert
*/

#ifndef STR_H_
#define STR_H_

#include "Skills.h"

class STR : public Skills, public Character, public Race {

public:
	STR(float str);

	void SetSavingThrowSTR();

	void setAthleticsProf(bool);
	int getAthleticsMod();

private:
	bool AthleticsProf = false;
	int AthleticsMod = 0;
	int STRSaveThrowMod = 0;

};

#endif // !STR_H_
