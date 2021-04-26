/*
	CHA.h

	Created on: Apr 25, 2021
		Author: Robert
*/

#ifndef CHA_H_
#define CHA_H_

#include "Skills.h"
#include "Character.h"
#include "Class.h"

class CHA : public Skills {

public:
	CHA(bool cha1);

	void SetSavingThrow(Class, Character);
	int getSavingThrow();
	int PrintSkillsCHA(Character);

	void setDeceptionProf(bool);
	int getDeceptionMod(Character);

	void setIntimidationProf(bool);
	int getIntimidationMod(Character);

	void setPerformanceProf(bool);
	int getPerformanceMod(Character);

	void setPersuasionProf(bool);
	int getPersuasionMod(Character);

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
