/*
	Constitution.h

	Created on: Apr 24, 2021
		Author: Robert
*/

#ifndef CONSTITUSION_H_
#define CONSTITUTION_H_

#include "Skills.h"

class Constitution : public Skills, public Character, public Class, public Race {

public:
	Constitution();

	void SetSavingThrowCON();

private:
	int CONSaveThrowMod = 0;

};

#endif // !CONSTITUTION_H_
