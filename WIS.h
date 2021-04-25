/*
	WIS.h

	Created on: Apr 25, 2021
		Author: Robert
*/

#ifndef WIS_H_
#define WIS_H_

#include "Skills.h"

class WIS : public Skills {

public:
	WIS(char wis1, char wis2);

	void SetSavingThrowWIS();

	void setAnimalHandlingProf(bool);
	int getAnimalHandlingMod();

	void setInsightProf(bool);
	int getInsightMod();

	void setMedicineProf(bool);
	int getMedicineMod();

	void setPerceptionProf(bool);
	int getPerceptionMod();

	void setSurvivalProf(bool);
	int getSurvivalMod();

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

};

#endif // !WIS_H_
