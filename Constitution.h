/*
	Constitution.h

	Created on: Apr 24, 2021
		Author: Robert
*/

#ifndef CONSTITUSION_H_
#define CONSTITUTION_H_

#include "Skills.h"

class Constitution : public Skills {

public:
	Constitution(char cont);

	void SetSavingThrow();
	int getSavingThrow();
	int PrintSkillsCON();

private:
	int CONSaveThrowMod = 0;

};

#endif // !CONSTITUTION_H_
