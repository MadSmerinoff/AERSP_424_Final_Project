#include "Race.h"

#pragma once
class Character
{
public:
	Character();
	void setStrAbil(int);
	int getStrAbil();
	void setDexAbil(int);
	int getDexAbil();
	void setConAbil(int);
	int getConAbil();
	void setIntAbil(int);
	int getIntAbil();
	void setWisAbil(int);
	int getWisAbil();
	void setChrAbil(int);
	int getChrAbil();
	void calculateModifiers();

private:
	Race charRace;
	//Skillset charSkills;
	//Class charClass;

	int profBonus;
	
	int strAbil;
	int dexAbil;
	int conAbil;
	int intAbil;
	int wisAbil;
	int chrAbil;
	int strMod;
	int dexMod;
	int conMod;
	int intMod;
	int wisMod;
	int chrMod;
};

