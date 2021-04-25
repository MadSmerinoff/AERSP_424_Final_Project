/*
	DEX.h

	Created on: Apr 24, 2021
		Author: Robert
*/

#ifndef DEX_H_
#define DEX_H_

#include "Skills.h"

class DEX : public Skills {

public:
	DEX(float dex1, float dex2);

	void SetSavingThrow();
	int getSavingThrow();

	void setAcrobaticsProf(bool);
	int getAcrobaticsMod();

	void setSleightofHandProf(bool);
	int getSleightofHandMod();

	void setStealthProf(bool);
	int getStealthMod();

private:
	bool AcrobaticsProf = false;
	int AcrobaticsMod = 0;

	bool SleightofHandProf = false;
	int SleightofHandMod = 0;

	bool StealthProf = false;
	int StealthMod = 0;

	int DEXSaveThrowMod = 0;

};

#endif // !DEX_H_
