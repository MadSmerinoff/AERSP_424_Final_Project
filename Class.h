#include <iostream>
using namespace std;

#pragma once
class Class
{
public:
	Class();

	void setHitDice(int);
	int getHitDice();

	void setProfStr(bool);
	bool getProfStr();
	void setProfDex(bool);
	bool getProfDex();
	void setProfCon(bool);
	bool getProfCon();
	void setProfInt(bool);
	bool getProfInt();
	void setProfWis(bool);
	bool getProfWis();
	void setProfChr(bool);
	bool getProfChr();

	void calcSaveMods(int, int, int, int, int, int);
	int getSaveModStr();
	int getSaveModDex();
	int getSaveModCon();
	int getSaveModInt();
	int getSaveModWis();
	int getSaveModChr();

	void setClassFeatures(string);
	string getClassFeatures();
	
	string getSpellList();

private:
	int hitDice;
	bool profStr;
	bool profDex;
	bool profCon;
	bool profInt;
	bool profWis;
	bool profChr;
	int saveModStr;
	int saveModDex;
	int saveModCon;
	int saveModInt;
	int saveModWis;
	int saveModChr;
	string classFeatures;
	string spellList;
};

