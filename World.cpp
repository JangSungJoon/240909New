#include "World.h"
#include <iostream>

using namespace std;

void World::CreateMap(int PlayerX, int PlayerY, int EnemyX, int EnemyY)
{
	for (int Y = 0; Y < MapSize; Y++)
	{
		for (int X = 0; X < MapSize; X++)
		{
			if (Y == PlayerY && X == PlayerX)
			{
				cout << "*";
			}
			else if (Y == EnemyY && X == EnemyX)
			{
				cout << "@";
			}
			else if (Y == 4 && X == 4)
			{
				cout << "$";
			}
			else
			{
				cout << "#";
			}
		}
		cout << endl;
	}
}
