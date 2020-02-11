#include <iostream>

using namespace std;

int main()
{
	int playerHealth{ 10 };
	int playerStrength{ 6 };
	int monsterHealth{ 40 };
	int monsterStrength{ 2 };
	char command{ 'x' };
	cout << "A monster approaches!!" << endl;
	while (playerHealth > 0 && monsterHealth > 0)
	{
		cout << "Player: " << playerHealth << "  Monster: " << monsterHealth << endl;
		cout << "What do you do? (a)ttack (h)eal ";
		cin >> command;
		switch (command)
		{
		case 'a':
			monsterHealth -= playerStrength;
			break;
		case 'h':
			playerHealth += (playerStrength / 2);
			break;
		default:
			cout << "please enter a or h" << endl;
			break;
		}
		cout << "The monster attacks!" << endl;
		playerHealth -= monsterStrength;
		system("PAUSE");
		system("CLS");
	}

	if (playerHealth <= 0)
	{
		cout << "You Have Died" << endl;
	}
	if (playerHealth <= 0 && monsterHealth <= 0)
	{
		cout << "BUT" << endl;
	}
	if (monsterHealth <= 0)
	{
		cout << "You have killed the monster!!!" << endl;
	}
	system("PAUSE");
	return 0;
}