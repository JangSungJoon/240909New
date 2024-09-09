#include <iostream>
#include "World.h"
#include "Player.h"

using namespace std;

int main()
{
	World CreateWorld;
	Player NewPlayer;

	while (NewPlayer.PlayerX < 3 && NewPlayer.PlayerY < 3)
	{
		CreateWorld.CreateMap(NewPlayer.PlayerX, NewPlayer.PlayerY);

		char MovementInput = 0;

		cin >> MovementInput;




		NewPlayer.Movement(MovementInput);

	}
	

	return 0;
}
