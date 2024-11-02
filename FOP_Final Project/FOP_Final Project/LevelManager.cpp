#include "LevelManager.h"

LevelManager::LevelManager() :
	m_CurrentLevel(0),
	m_Level4Unlocked(false)

{
	/*m_Levels.emplace_back("The Life Forest", "A peaceful forest with, you can stay here as long as you want,traveller!", false);
	m_Levels.emplace_back("The Dead Forest", "A dark forest with a lurking enemy! you can pass him or chose to fight with him", false);
	m_Levels.emplace_back("Merchant's Haven", "Falling leaves and wind! remember to meet the merchant.", false);
	m_Levels.emplace_back("The Kingdom", "Home of the boss who caused the corruption. Must defeat him!", true);*/

	m_pLevel[0] = new Level("The Life Forest", "A peaceful forest with, you can stay here as long as you want,traveller!", false);
	m_pLevel[1] = new Level("The Dead Forest", "A dark forest with a lurking enemy! you can pass him or chose to fight with him", false);
	m_pLevel[2] = new Level("Merchant's Haven", "Falling leaves and wind! remember to meet the merchant.", false);
	m_pLevel[3] = new Level("The Kingdom", "Home of the boss who caused the corruption. Must defeat him!", true);

}

LevelManager::~LevelManager()
{
	for (int i = 0; i < 4; ++i) {
		delete m_pLevel[i];
	}

	delete m_pEnemy;
	m_pEnemy = nullptr;
}

void LevelManager::MoveToLevel(int levelChoice)
{
	if (levelChoice < 1 || levelChoice > 4) {
		cout << "Invalid Level Number\n";
		return;
	}

	if (levelChoice == 4 && m_pEnemy->GetIsAlive(true) && !m_Level4Unlocked) {
		cout << "Level " << levelChoice << "is locked. Defete the enemy in th Dead Forest.\n";
		
		return;
	}

	switch (levelChoice) {
	case 1:
		cout << "The Life Forest" << "\n";
		DisplayCurrentLevel();
		break;

	case 2:
		cout << "The Dead Forest" << "\n";
		DisplayCurrentLevel();
		m_pEnemy->DisplayEnemy();
		break;

	case 3:
		cout << "Merchant's Haven" << "\n";
		cout << "You meet a merchant." << "\n";
		break;

	case 4:
		cout << "The Kingdom" << "\n";
		break;
	}

}

void LevelManager::DisplayCurrentLevel()
{
	for (int i = 0; i < 4; ++i) {
		if (i == 3 && !m_Level4Unlocked) {
			cout << "Level " << i + 1 << "is locked.\n";
			cout << "You have to defete an enemy in The Dead Forest.\n";
		}
		else {
			cout << m_pLevel[i]->Getlevelname() << ": " << m_pLevel[i]->GetlevelDescription() << "\n";
		}
	}
}

void LevelManager::UnlockLevel()
{
	if (m_pEnemy->GetIsAlive(true)) {
		cout << "Enemy is defeated!\n";
	}
	else {
		cout << "Enemy is still alive and you must defet it to enter to this level\n";
	}
}
