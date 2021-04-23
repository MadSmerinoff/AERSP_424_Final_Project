#include <string>

using namespace std;

#pragma once
class Race
{
	

public:
	Race();

	void setSpeed(int);
	int getSpeed();

	void setStrBonus(int);
	int getStrBonus();
	void setDexBonus(int);
	int getDexBonus();
	void setConBonus(int);
	int getConBonus();
	void setIntBonus(int);
	int getIntBonus();
	void setWisBonus(int);
	int getWisBonus();
	void setChrBonus(int);
	int getChrBonus();

	void setLang1(string);
	string getLang1();
	void setLang2(string);
	string getLang2();
	void setLang3(string);
	string getLang3();

	void setAge(float);
	float getAge();
	void setWeight(float);
	float getWeight();
	void setHeight(float);
	float getHeight();

	void setFeature(string);
	string getFeature();

private:
	int speed;
	int strBonus;
	int dexBonus;
	int conBonus;
	int intBonus;
	int wisBonus;
	int chrBonus;
	string lang1;
	string lang2;
	string lang3;
	float age;
	float weight;
	float height;
	string feature;
};

