#include "Player.h"
#include "iostream"

using namespace std;

int Player::Movement(char PlayerInput)
{
	switch (PlayerInput)
	{
	case 'w':
		PlayerY--;
		if (PlayerY < 0)
		{
		    PlayerY = 0;
		    cout << "Invalid Try Again" << endl;
		}
		break;

	case 'a':
		PlayerX--;
		if (PlayerX < 0)
		{
			PlayerX = 0;
			cout << "Invalid Try Again" << endl;
			break;
		}
		break;
		
	case 's':
		PlayerY++;
		if (PlayerY > 3)
		{
			PlayerY = 3;
			cout << "Invalid Try Again" << endl;
		}
		break;

	case 'd':
		PlayerX++;
		if (PlayerX > 3)
		{
			PlayerX = 3;
			cout << "Invalid Try Again" << endl;
			break;
		}
		break;

	default:
		cout << "Try Again" << endl;

	}

	return 0;
}
