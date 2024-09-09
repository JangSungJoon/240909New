#pragma once
class World
{
public:

	int MapSize = 5;
	int MaxSize = MapSize - 1;
	bool IsnotGameOver = true;

	int Map[5][5] = {
	{0 ,0, 0, 0, 0},
	{0, 0, 0, 0, 0},
	{0, 0, 0, 0, 0},
	{0, 0, 0, 0, 0},
	{0, 0, 0, 0, 0}
	};

	void CreateMap(int PlayerX, int PlayerY, int EnemyX, int EnemyY);


};

