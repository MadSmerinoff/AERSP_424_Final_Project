/*
	INT.h

	Created on: Apr 24, 2021
		Author: Robert
*/

#ifndef INT_H_
#define INT_H_

#include "Skills.h"

class INT : public Skills, public Character, public Class, Race {

public:
	INT();

	void SetSavingThrowINT();

	void setArcanaProf(bool);
	int getArcanaMod();

	void setHistoryProf(bool);
	int getHistoryMod();

	void setInvestigationProf(bool);
	int getInvestigationMod();

	void setNatureProf(bool);
	int getNatureMod();

	void setReligionProf(bool);
	int getReligionMod();

private:
	bool ArcanaProf = false;
	int ArcanaMod = 0;

	bool HistoryProf = false;
	int HistoryMod = 0;

	bool InvestigationProf = false;
	int InvestigationMod = 0;

	bool NatureProf = false;
	int NatureMod = 0;

	bool ReligionProf = false;
	int ReligionMod = 0;

	int INTSaveThrowMod = 0;

};

#endif // !INT_H_