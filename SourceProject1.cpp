#include <iostream>
#include <vector>
#include "Race.h"
#include <map>
#include "Character.h"

using namespace std;

int main() {
	
	//intialization
	int input; //used for switch input
	int misc; //dummy int variable used for user selections
	bool valid = true; //used in do while loops to check for valid inputs from user
	
	Race playerRace;
	map<int, string> mapLanguages; //this and its pairs are used for language selection in race and background selection
	mapLanguages.insert(pair<int, string>(1, "Common"));
	mapLanguages.insert(pair<int, string>(2, "Elvish"));
	mapLanguages.insert(pair<int, string>(3, "Dwarvish"));
	mapLanguages.insert(pair<int, string>(4, "Orcish"));
	mapLanguages.insert(pair<int, string>(5, "Gnomish"));
	mapLanguages.insert(pair<int, string>(6, "Infernal"));
	
	
	//select race Human, half orc, tiefling
	do {
		cout << "Please select the race of your character:\n1. Human\n2. Half Orc\n3. Tiefling" << endl;
		cin >> input;

		switch (input)
		{
		case 1:
			// add +1 to all stats
			playerRace.setStrBonus(1);
			playerRace.setDexBonus(1);
			playerRace.setConBonus(1);
			playerRace.setIntBonus(1);
			playerRace.setWisBonus(1);
			playerRace.setChrBonus(1);

			// query misc
			cout << "What is your character's age?" << endl;
			cin >> misc;
			playerRace.setAge(misc);

			cout << "What is your character's weight in pounds?" << endl;
			cin >> misc;
			playerRace.setWeight(misc);

			cout << "What is your character's height in inches?" << endl;
			cin >> misc;
			playerRace.setHeight(misc);

			// query language
			cout << "You selected human so your character speaks Common and one additional language" << endl;
			playerRace.setLang1("Common");
			cout << "Choose your additional language:\n1. Elvish\n2. Dwarvish\n3. Orcish\n4. Gnomish\n5. Infernal" << endl;
			cin >> misc;
			misc = misc + 1; //this line of code adjusts for the lack of common in the map list;
			if (misc <= 0 || misc >= 6) {
				misc = 1;
				cout << "You input a value not listed so we've defaulted your second language to Elvish" << endl;
			}
			playerRace.setLang2(mapLanguages[misc]); //used map to turn user input of numbers into a string without using switch statement
			
			// record speed
			playerRace.setSpeed(30);

			// add features
			playerRace.setFeature("Humans do not have a starting feature");

			break;
		case 2:
			// add +2 to strength, +1 to con
			playerRace.setStrBonus(2);
			playerRace.setConBonus(1);

			// query misc
			cout << "What is your character's age?" << endl;
			cin >> misc;
			playerRace.setAge(misc);

			cout << "What is your character's weight in pounds?" << endl;
			cin >> misc;
			playerRace.setWeight(misc);

			cout << "What is your character's height in inches?" << endl;
			cin >> misc;
			playerRace.setHeight(misc);

			// query language
			cout << "You selected half-orc so your character speaks Common and Orcish" << endl;
			playerRace.setLang1("Common");
			playerRace.setLang2("Orcish");

			// record speed
			playerRace.setSpeed(30);

			// add features
			playerRace.setFeature("Relentless Endurance: When you are reduced to 0 hit points but not killed outright, you can drop to 1 hit point instead. You can't use this feature again until you finish a long rest\n\nSavage Attacks: When you score a critical hit with a melee weapon attack, you can roll one of the weapon's damage dice one additional time and add it to the extra damage of the critical hit.");
			// MENACING IMPLEMENTATION NEEDED

			break;
		case 3:
			// add +2 to char, +1 to int
			playerRace.setChrBonus(2);
			playerRace.setIntBonus(1);

			// query misc
			cout << "What is your character's age?" << endl;
			cin >> misc;
			playerRace.setAge(misc);

			cout << "What is your character's weight in pounds?" << endl;
			cin >> misc;
			playerRace.setWeight(misc);

			cout << "What is your character's height in inches?" << endl;
			cin >> misc;
			playerRace.setHeight(misc);

			// query lang
			cout << "You selected tiefling so your character speaks Common and Infernal" << endl;
			playerRace.setLang1("Common");
			playerRace.setLang2("Infernal");

			// record speed
			playerRace.setSpeed(30);

			// add features
			playerRace.setFeature("Darkvision: You can see in dim light within 60 feet of you as if it were bright light\n\nHellish Resistance: You are resistant to fire damage\n\nInfernal Legacy: You know the thaumaturgy cantrip. You learn more spells when you level up. See the player's handbook");

			break;
		default:
			cout << "Invalid input." << endl;
			valid = false;
			break;
		}
	} while (valid == false);

	valid = true;


	//select class as cleric, barbarian, rogue
	do {
		cout << "Please select the class of your character:\n1. Cleric\n2. Barbarian\n3. Fighter" << endl;
		cin >> input;

		switch (input)
		{
		case 1:
			// set hit dice to d8 and saves to wisdom and charisma
			// select proficiency in history, insight, medicine, persuasion or religion
			// add features for level as well as hp? 
			// print list of spells
			// print gold for equipment
			break;
		case 2:
			// set hit dice to d12 and saves to strength and constitution
			// select proficiency in animal handling, athletics, intimidation, nature, perception
			// add features for level as well as hp?
			// print gold for equipment
			break;
		case 3:
			// set hit dice to d10 and saves to strength and constitution
			// select proficiency in acrobatics, animal handling, athletics, history, insight, intimidation, perception, survival
			// add features for level as well as hp?
			// print gold for equipment
			break;
		default:
			cout << "Invalid input." << endl;
			valid = false;
			break;
		}
	} while (valid == false);

	valid = true;

	Character playerCharacter;
	//select abilities using standard array
	vector<int> vecOfAbil{ 15, 14, 13, 12, 10, 8 };

	cout << "The following is the standard array of ability scores:";
	for (int i = 1; i < 7; i++)
	{
		cout << " " << vecOfAbil[i];
	}
	cout << "\n";

	vector<bool> vecOfChoices{ true, true, true, true, true, true, true };

	for (int k = 1; k < 7; k++)
	{
		do
		{
			valid = true;
			cout << "Which ability should " << vecOfAbil[k] << "apply to:\n1. Strength\n2. Dexterity\n3. Constitution\n4. Intelligence\n5. Wisdom\n6. Charisma" << endl;
			cin >> input;

			if (vecOfChoices[input] = false)
				input = 7;
			else
				vecOfChoices[input] = false; //preventing duplicate assignment

			switch (input)
			{
			case 1:
				// add vecOfAbil number and race bonus to str
				playerCharacter.setStrAbil(playerRace.getStrBonus() + vecOfAbil[k]);
				break;
			case 2:
				// add vecOfAbil number and race bonus to dex
				playerCharacter.setDexAbil(playerRace.getDexBonus() + vecOfAbil[k]);
				break;
			case 3:
				// add vecOfAbil number and race bonus to con
				playerCharacter.setConAbil(playerRace.getConBonus() + vecOfAbil[k]);
				break;
			case 4:
				// add vecOfAbil number and race bonus to int
				playerCharacter.setIntAbil(playerRace.getIntBonus() + vecOfAbil[k]);
				break;
			case 5:
				// add vecOfAbil number and race bonus to wis
				playerCharacter.setWisAbil(playerRace.getWisBonus() + vecOfAbil[k]);
				break;
			case 6:
				// add vecOfAbil number and race bonus to chr
				playerCharacter.setChrAbil(playerRace.getChrBonus() + vecOfAbil[k]);
				break;
			default:
				cout << "Invalid selection. Either that ability already has a score or an invalid input was supplied." << endl;
				valid = false;
				break;
			} // end switch

		} while (valid == false); //end do while
	} //end for
	valid = true;


	//select background
	do {
		cout << "Please select the background of your character:\n1. Acolyte\n2. Hermit\n3. Soldier" << endl;
		cin >> input;

		switch (input)
		{
		case 1:
			// Add proficiency in insight and religion; correct dupes?
			// Add 2 languages that are not dupes or do not correct?
			// Add equipment
			// Roll on tables?
			break;
		case 2:
			// Add proficiency in medicine and religion and herbalism kit; correct dupes?
			// Add language of choice; correct dupes?
			// Add equipment
			// Roll on tables?
			break;
		case 3:
			// Add proficiency in athetics and intimidation and playing cards; correct dupes?
			// Add equipment
			// Roll on tables?
			break;
		default:
			cout << "Invalid input." << endl;
			valid = false;
			break;
		}
	} while (valid == false);


	return 0;
}
