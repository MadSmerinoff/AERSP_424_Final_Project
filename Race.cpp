#include "Race.h"



Race::Race() {
	speed = 0;
	strBonus = 0;
	dexBonus = 0;
	conBonus = 0;
	intBonus = 0;
	wisBonus = 0;
	chrBonus = 0;
	lang1 = "Common";
	lang2 = "";
	lang3 = "";
	lang4 = "";
	age = 0;
	weight = 0;
	height = 0;
	feature = "Null";
}


void Race::setSpeed(int s) {
	speed = s;
}

int Race::getSpeed() {
	return speed;
}


void Race::setStrBonus(int b) {
	strBonus = b;
}

int Race::getStrBonus() {
	return strBonus;
}

void Race::setDexBonus(int b) {
	dexBonus = b;
}

int Race::getDexBonus() {
	return dexBonus;
}

void Race::setConBonus(int b) {
	conBonus = b;
}

int Race::getConBonus() {
	return conBonus;
}

void Race::setIntBonus(int b) {
	intBonus = b;
}

int Race::getIntBonus() {
	return intBonus;
}

void Race::setWisBonus(int b) {
	wisBonus = b;
}

int Race::getWisBonus() {
	return wisBonus;
}

void Race::setChrBonus(int b) {
	chrBonus = b;
}

int Race::getChrBonus() {
	return chrBonus;
}


void Race::setLang1(string l) {
	lang1 = l;
}

string Race::getLang1() {
	return lang1;
}

void Race::setLang2(string l) {
	lang2 = l;
}

string Race::getLang2() {
	return lang2;
}

void Race::setLang3(string l) {
	lang3 = l;
}

string Race::getLang3() {
	return lang3;
}


void Race::setAge(float a) {
	age = a;
}

float Race::getAge() {
	return age;
}

void Race::setWeight(float w) {
	weight = w;
}

float Race::getWeight() {
	return weight;
}

void Race::setHeight(float h) {
	height = h;
}

float Race::getHeight() {
	return height;
}


void Race::setFeature(string f) {
	feature = f;
}

string Race::getFeature() {
	return feature;
}

void Race::setLang4(string l) {
	lang4 = l;
}

string Race::getLang4() {
	return lang4;
}
