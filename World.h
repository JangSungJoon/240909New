#pragma once
class World
{
public:

	int MapSize = 3;

	int Map[3][3] = {
	{0 ,0, 0},
	{0, 0, 0},
	{0, 0, 0}
	};

	void CreateMap(int PlayerX, int PlayerY);


};

