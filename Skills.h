/*
	Skills.h

	Created on: Apr 24, 2021
		Author: Robert
*/

#ifndef SKILLS_H_
#define SKILLS_H_

class Skills {

public:


protected:
	virtual int SavingThrow() = 0;
	virtual int Check() = 0;
	virtual int Passive();

	virtual ~Skills() {};


};

#endif // SKILLS_H_
