#pragma once
#include <iostream>
#include <vector>
#include "Level.h"
#include "Enemy.h"

using namespace std;

class LevelManager
{
public:
	LevelManager();
	~LevelManager();

	void MoveToLevel(int levelChoice);
	void DisplayCurrentLevel();
	void UnlockLevel();
	

private:
	
	int m_CurrentLevel;
	bool m_Level4Unlocked;
	Level* m_pLevel[4];
	
	Enemy* m_pEnemy;
	

};

