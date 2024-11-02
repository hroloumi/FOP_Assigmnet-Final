#pragma once
#include <string>
#include "Character.h"
#include "Player.h"
#include "Enemy.h"
#include "LevelManager.h"

using namespace std;

class Gameplay
{
public:
	Gameplay();
	~Gameplay();

	void runGame();

private:

	Character* m_pCharacter;
	Player* m_pPlayer;
	Enemy* m_pEnemy;
	LevelManager* m_pLevel;

	string m_name;
	int m_heroChoice;
	int m_classChoice;
	char m_choice;
	

	bool validInput(int choice, int min, int max);
};

