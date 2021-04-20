#include <iostream>
#include <vector>

using namespace std;

int main() {
	
	int input;
	bool valid;
	

	//select race Human, half orc, tiefling
	do {
		cout << "Please select the race of your character:\n1. Human\n2. Half Orc\n3. Gnomes" << endl;
		cin >> input;

		switch (input)
		{
		case 1:
			// add +1 to all stats
			// query misc
			// query language
			// record speed
			// add features
			break;
		case 2:
			// add +2 to strength, +1 to con
			// query misc
			// query language
			// record speed
			// add features
			break;
		case 3:
			// add +2 to char, +1 to int
			// query misc
			// query lang
			// record speed
			// add features
			break;
		default:
			cout << "Invalid input." << endl;
			valid = false;
			break;
		}
	} while (valid = false);

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
	} while (valid = false);

	valid = true;


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
				break;
			case 2:
				// add vecOfAbil number and race bonus to dex
				break;
			case 3:
				// add vecOfAbil number and race bonus to con
				break;
			case 4:
				// add vecOfAbil number and race bonus to int
				break;
			case 5:
				// add vecOfAbil number and race bonus to wis
				break;
			case 6:
				// add vecOfAbil number and race bonus to chr
				break;
			default:
				cout << "Invalid selection. Either that ability already has a score or an invalid input was supplied." << endl;
				valid = false;
				break;
			} // end switch

		} while (valid = false); //end do while
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
	} while (valid = false);


	return 0;
}