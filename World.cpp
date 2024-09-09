#include "World.h"
#include <iostream>

using namespace std;

void World::CreateMap(int PlayerX, int PlayerY)
{
	for (int Y = 0; Y < 3; Y++)
	{
		for (int X = 0; X < 3; X++)
		{
			if (Y == PlayerY && X == PlayerX)
			{
				cout << "*";
			}
			else
			{
				cout << "#";
			}
		}
		cout << endl;
	}
}
