/*
	Skills.h

	Created on: Apr 24, 2021
		Author: Robert
*/

#ifndef SKILLS_H_
#define SKILLS_H_

#include "Class.h"
#include "Race.h"
#include "Character.h"


class Skills : public Class, public Character, public Race {

public:
	Skills();

protected:
	virtual void SetSavingThrow();
	virtual int getSavingThrow();

	virtual ~Skills() {};


};

#endif // SKILLS_H_
