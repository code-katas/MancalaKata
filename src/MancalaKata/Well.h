#pragma once
class Well
{
private:	
	int _owner;
	int _numberOfSeeds;

public:
	

	Well::Well()
	{
		SetNumberOfSeeds(4);
	}

	bool HasSeeds()
	{

	}

	int GetNumberOfSeeds() const
	{
		return _numberOfSeeds;
	}

	int SurrenderSeeds()
	{
		int currentSeeds = GetNumberOfSeeds();
		SetNumberOfSeeds(0);
		return currentSeeds;
	}

	void SetNumberOfSeeds(int count)
	{
		_numberOfSeeds = count;
	}

};