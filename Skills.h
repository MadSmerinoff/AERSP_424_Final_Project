/*
	Skills.h

	Created on: Apr 24, 2021
		Author: Robert
*/

#ifndef SKILLS_H_
#define SKILLS_H_

#include "Class.h"
#include "Class.h"
#include "Race.h"
#include "Character.h"

class Skills : public Class {

public:


protected:
	virtual void SetSavingThrow() = 0;
	virtual int getSavingThrow() = 0;

	virtual ~Skills() {};


};

#endif // SKILLS_H_
