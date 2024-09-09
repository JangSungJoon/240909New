#include "Player.h"
#include "iostream"

using namespace std;

int Player::Movement(char PlayerInput, int Maxmapsize)
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
		}
		break;
		
	case 's':
		PlayerY++;
		if (PlayerY > Maxmapsize)
		{
			PlayerY = Maxmapsize;
			cout << "Invalid Try Again" << endl;
		}
		break;

	case 'd':
		PlayerX++;
		if (PlayerX > Maxmapsize)
		{
			PlayerX = Maxmapsize;
			cout << "Invalid Try Again" << endl;
		}
		break;

	default:
		cout << "Try Again" << endl;

	}

	return 0;
}
