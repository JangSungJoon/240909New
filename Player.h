#pragma once
class Player
{
public:

	int PlayerX = 0;
	int PlayerY = 0;

	int Movement(char PlayerInput, int MaxMapsize);

};