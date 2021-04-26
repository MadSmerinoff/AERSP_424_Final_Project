/*
	WIS.h

	Created on: Apr 25, 2021
		Author: Robert
*/

#ifndef WIS_H_
#define WIS_H_

#include "Skills.h"
#include "Character.h"
#include "Class.h"

class WIS : public Skills {

public:
	WIS(char wis1, char wis2);

	void SetSavingThrow(Character, Class);
	int getSavingThrow();
	int PrintSkillsWIS(Character);

	void setAnimalHandlingProf(bool);
	int getAnimalHandlingMod(Character);

	void setInsightProf(bool);
	int getInsightMod(Character);

	void setMedicineProf(bool);
	int getMedicineMod(Character);

	void setPerceptionProf(bool);
	int getPerceptionMod(Character);

	void setSurvivalProf(bool);
	int getSurvivalMod(Character);

	int getPassivePerception(Character);

	int getPassiveInsight(Character);

private:
	bool AnimalHandlingProf = false;
	int AnimalHandlingMod = 0;

	bool InsightProf = false;
	int InsightMod = 0;

	bool MedicineProf = false;
	int MedicineMod = 0;

	bool PerceptionProf = false;
	int PerceptionMod = 0;

	bool SurvivalProf = false;
	int SurvivalMod = 0;

	int WISSaveThrowMod = 0;

	//PassiveSkills
	int PassivePerception = 0;
	int PassiveInsight = 0;

};

#endif // !WIS_H_
