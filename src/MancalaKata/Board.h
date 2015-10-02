#pragma once
#include "Well.h"

class Board
{
private:
	Well _well;

public:

	Board::Board()
	{
		Well _well;
	}

	int GatherSeeds(int wellNumber)
	{
		return _well.SurrenderSeeds();
	}

	Well* GetWell(int wellNumber)
	{
		return &_well;
	}
};