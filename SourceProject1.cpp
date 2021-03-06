#include <iostream>
#include <vector>
#include "Race.h"
#include <map>
#include "Character.h"
#include "Class.h"

using namespace std;

int main() {
	
	//intialization
	int input; //used for switch input
	int misc; //dummy int variable used for user selections
	bool valid = true; //used in do while loops to check for valid inputs from user
	
	Character playerCharacter; //OVERARCHING CHARACTER CLASS IS MADE
	Race playerRace;
	Class playerClass;
	map<int, string> mapLanguages; //this and its pairs are used for language selection in race and background selection
	mapLanguages.insert(pair<int, string>(1, "Common"));
	mapLanguages.insert(pair<int, string>(2, "Elvish"));
	mapLanguages.insert(pair<int, string>(3, "Dwarvish"));
	mapLanguages.insert(pair<int, string>(4, "Orcish"));
	mapLanguages.insert(pair<int, string>(5, "Gnomish"));
	mapLanguages.insert(pair<int, string>(6, "Infernal"));

	string raceName;
	string className;
	string backgroundName;
	
	
	//select race Human, half orc, tiefling
	do {
		cout << "Please select the race of your character:\n1. Human\n2. Half Orc\n3. Tiefling" << endl;
		cin >> input;

		switch (input)
		{
		case 1:
			raceName = "Human";

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
			raceName = "Half-Orc";

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
			raceName = "Tiefling";

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
	
	
	playerCharacter.setRace(playerRace); //Race object is added to overarching character object

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

	//select class as cleric, barbarian, fighter
	do {
		cout << "Please select the class of your character:\n1. Cleric\n2. Barbarian\n3. Fighter" << endl;
		cin >> input;

		switch (input)
		{
		case 1:
			className = "Cleric";

			// set hit dice to d8 and saves to wisdom and charisma
			playerClass.setHitDice(8);
			playerClass.setProfWis(true);
			playerClass.setProfChr(true);

			// select proficiency in history, insight, medicine, persuasion or religion

			// add features
			playerClass.setClassFeatures("You are a spellcaster. You can ritual cast and you use a holy symbol as your spellcasting focus.");
			
			// print list of spells
			cout << "As a cleric, you may select 3 cantrips and " << playerCharacter.getWisMod() + 1 << " 1st Level Spells from the following list:" << endl;
			cout << playerClass.getSpellList();

			//calc HP and AC
			cout << "Your max HP is: " << playerClass.getHitDice() + playerCharacter.getConMod() << endl;
			playerCharacter.setHP(playerClass.getHitDice() + playerCharacter.getConMod());

			cout << "You base AC is: " << playerCharacter.getDexMod() + 10 << endl;
			playerCharacter.setAC(playerCharacter.getDexMod() + 10);

			cout << "Your starting gold amount is 80." << endl;
			playerClass.setGold(80);

			break;
		case 2:
			className = "Barbarian";

			// set hit dice to d12 and saves to strength and constitution
			playerClass.setHitDice(12);
			playerClass.setProfStr(true);
			playerClass.setProfCon(true);

			// select proficiency in animal handling, athletics, intimidation, nature, perception

			// add features
			playerClass.setClassFeatures("Rage: As a bonus action, you can enter a rage in combat. See the player's handbook for a list of rage benefits. You may only rage twice before taking a long rest.\n\n Unarmored Defense: While you are not wearing any armor, your Armor Class equals 10 + your Dexterity modifier + your Constitution modifier. You can use a Shield and still gain this benefit.");
			
			//calc HP and AC
			cout << "Your max HP is: " << playerClass.getHitDice() + playerCharacter.getConMod() << endl;
			playerCharacter.setHP(playerClass.getHitDice() + playerCharacter.getConMod());

			cout << "You base AC is: " << playerCharacter.getDexMod() + playerCharacter.getConMod() + 10 << endl;
			playerCharacter.setAC(playerCharacter.getDexMod() + playerCharacter.getConMod() + 10);

			cout << "Your starting gold amount is 200." << endl;
			playerClass.setGold(200);

			break;
		case 3:
			className = "Fighter";

			// set hit dice to d10 and saves to strength and constitution
			playerClass.setHitDice(10);
			playerClass.setProfStr(true);
			playerClass.setProfCon(true);

			// select proficiency in acrobatics, animal handling, athletics, history, insight, intimidation, perception, survival
			
			// add features
			playerClass.setClassFeatures("Choose your fighting style: Archery, Defense, Dueling, Great Weapon Fighting, Protection, or Two Weapon Fighting. More details on each fighting style can be found in the player's handbook.");

			//calc HP and AC
			cout << "Your max HP is: " << playerClass.getHitDice() + playerCharacter.getConMod() << endl;
			playerCharacter.setHP(playerClass.getHitDice() + playerCharacter.getConMod());

			cout << "You base AC is: " << playerCharacter.getDexMod() + 10 << endl;
			playerCharacter.setAC(playerCharacter.getDexMod() + 10);
			
			cout << "Your starting gold amount is 80." << endl;
			playerClass.setGold(200);

			break;
		default:
			cout << "Invalid input." << endl;
			valid = false;
			break;
		}
	} while (valid == false);

	playerClass.calcSaveMods(playerCharacter.getStrMod(), playerCharacter.getDexMod(), playerCharacter.getConMod(), playerCharacter.getIntMod(), playerCharacter.getWisMod(), playerCharacter.getCharMod());
	valid = true;
	playerCharacter.setClass(playerClass); //class object is added to overarching Character Object

	//select background
	do {
		cout << "Please select the background of your character:\n1. Acolyte\n2. Hermit\n3. Soldier" << endl;
		cin >> input;

		switch (input)
		{
		case 1:
			backgroundName = "Acolyte";

			// Add proficiency in insight and religion; correct dupes?


			// Add 2 languages
			cout << "Your character already knows the following langauges: " << playerRace.getLang1() << " " << playerRace.getLang2() << " " << playerRace.getLang3() << endl;
			cout << "Please select 2 additional languages from the following list. Do not select duplicates: \n1. Elvish\n2. Dwarvish\n3. Orcish\n4. Gnomish\n5. Infernal" << endl;
			misc = misc + 1; //this line of code adjusts for the lack of common in the map list;
			if (misc <= 0 || misc >= 6) {
				misc = 1;
				cout << "You input a value not listed so we've defaulted your second language to Elvish" << endl;
			}
			playerRace.setLang3(mapLanguages[misc]); //used map to turn user input of numbers into a string without using switch statement

			cout << "Please select 1 additional languages from the following list. Do not select duplicates: \n1. Elvish\n2. Dwarvish\n3. Orcish\n4. Gnomish\n5. Infernal" << endl;
			misc = misc + 1; //this line of code adjusts for the lack of common in the map list;
			if (misc <= 0 || misc >= 6) {
				misc = 1;
				cout << "You input a value not listed so we've defaulted your second language to Elvish" << endl;
			}
			playerRace.setLang4(mapLanguages[misc]); //used map to turn user input of numbers into a string without using switch statement

			//add background gold
			playerClass.setGold(playerClass.getGold() + 15);
			
			break;
		case 2:
			backgroundName = "Hermit";

			// Add proficiency in medicine and religion and herbalism kit; correct dupes?
			

			// Add language of choice;
			cout << "Please select 1 additional languages from the following list. Do not select duplicates: \n1. Elvish\n2. Dwarvish\n3. Orcish\n4. Gnomish\n5. Infernal" << endl;
			misc = misc + 1; //this line of code adjusts for the lack of common in the map list;
			if (misc <= 0 || misc >= 6) {
				misc = 1;
				cout << "You input a value not listed so we've defaulted your second language to Elvish" << endl;
			}
			playerRace.setLang3(mapLanguages[misc]); //used map to turn user input of numbers into a string without using switch statement

			//add background gold
			playerClass.setGold(playerClass.getGold() + 5);

			break;
		case 3:
			backgroundName = "Soldier";

			// Add proficiency in athetics and intimidation and playing cards;


			//add background gold
			playerClass.setGold(playerClass.getGold() + 10);

			break;
		default:
			cout << "Invalid input." << endl;
			valid = false;
			break;
		}
	} while (valid == false);

	playerCharacter.setRace(playerRace); //Race object is added to overarching character object
	playerCharacter.setClass(playerClass);
	
	//print the whole shebang
	cout << "Your character is complete. Here is your sheet information:" << endl;
	cout << "You are a level 1 " << raceName << " " << className << " with the background of a/an " << backgroundName << endl;

	cout << "You have a max HP of " << playerCharacter.getHP() << ", an Armor Class of " << playerCharacter.getAC() << ", and a speed of " << playerRace.getSpeed() << "." << endl;

	cout << "Your ability scores are: \nStrength: " << playerCharacter.getStrAbil() << "\nDexterity: " << playerCharacter.getDexAbil() << "\nConsitution: " << playerCharacter.getConAbil() << "\nIntelligence: " << playerCharacter.getIntAbil() << "\nWisdom: " << playerCharacter.getWisAbil() << "\nCharisma: " << playerCharacter.getChrAbil() << endl;

	cout << "Your proficiency bonus is: +2" << endl;

	cout << "You know the following languages: " << playerRace.getLang1() << " " << playerRace.getLang2() << " " << playerRace.getLang3() << " " << playerRace.getLang4() << endl;

	return 0;
}
