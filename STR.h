/*
	STR.h

	Created on: Apr 24, 2021
		Author: Robert
*/

#ifndef STR_H_
#define STR_H_

#include "Skills.h"

class STR : public Skills {

public:
	STR(float str);

	void SetSavingThrow(Class, Character);
	int getSavingThrow();
	int PrintSkillsSTR();

	void setAthleticsProf(bool);
	int getAthleticsMod();

private:
	bool AthleticsProf = false;
	int AthleticsMod = 0;
	int STRSaveThrowMod = 0;

};

#endif // !STR_H_
