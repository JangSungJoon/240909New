#include <Windows.h>
#include <iostream>
#include <conio.h>
#include <vector>
#include "World.h"
#include "Player.h"
#include "Enemy.h"

using namespace std;

int main()
{
	World CreateWorld;
	Player NewPlayer;
	Enemy NewEnemy;

	while (CreateWorld.IsnotGameOver = true)
	{
		CreateWorld.CreateMap(NewPlayer.PlayerX, NewPlayer.PlayerY, NewEnemy.EnemyX, NewEnemy.EnemyY);

		char MovementInput = 0;

		cin >> MovementInput;

		NewPlayer.Movement(MovementInput, CreateWorld.MaxSize);

		if (NewPlayer.PlayerY == NewEnemy.EnemyY && NewPlayer.PlayerX == NewEnemy.EnemyX)
		{
			cout << "Game Over" << endl;
			break;
		}
		else if (NewPlayer.PlayerX == 4 && NewPlayer.PlayerY == 4)
		{
			cout << "End Game" << endl;
			break;
		}
	}
	return 0;
}