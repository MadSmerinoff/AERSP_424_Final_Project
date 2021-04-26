/*
	CHA.h

	Created on: Apr 25, 2021
		Author: Robert
*/

#ifndef CHA_H_
#define CHA_H_

#include "Skills.h"

class CHA : public Skills {

public:
	CHA(bool cha1);

	void SetSavingThrow();
	int getSavingThrow();
	int PrintSkillsCHA();

	void setDeceptionProf(bool);
	int getDeceptionMod();

	void setIntimidationProf(bool);
	int getIntimidationMod();

	void setPerformanceProf(bool);
	int getPerformanceMod();

	void setPersuasionProf(bool);
	int getPersuasionMod();

private:
	bool DeceptionProf = false;
	int DeceptionMod = 0;

	bool IntimidationProf = false;
	int IntimidationMod = 0;

	bool PerformanceProf = false;
	int PerformanceMod = 0;

	bool PersuasionProf = false;
	int PersuasionMod = 0;

	int CHASaveThrowMod = 0;

};

#endif // !CHA_H_
