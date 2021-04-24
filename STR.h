/*
	STR.h

	Created on: Apr 24, 2021
		Author: Robert
*/

#ifndef STR_H_
#define STR_H_

#include "Skills.h"

class STR
{

public:
	STR();

	int SavingThrow();
	int Check();
	int Athletics();

private:
	int AthleticsMod = 0;
	int STRSavingThrowMod = 0;

};

#endif // !STR_H_
