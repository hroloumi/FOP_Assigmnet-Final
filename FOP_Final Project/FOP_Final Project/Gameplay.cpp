#include <iostream>
#include <string>
#include "Gameplay.h"



Gameplay::Gameplay()
{
	m_pCharacter = new Character();
	m_pPlayer = new Player();
	m_pEnemy = new Enemy("BadGuy", 500, 10, 10, true);
	m_pLevel = new LevelManager();

	m_name = " ";
	m_heroChoice = 0;
	m_classChoice = 0;
	m_choice = 0;
}

Gameplay::~Gameplay()
{
	delete m_pCharacter;
	m_pCharacter = nullptr;

	delete m_pPlayer;
	m_pPlayer = nullptr;

	delete m_pEnemy;
	m_pEnemy = nullptr;

	delete m_pLevel;
	m_pLevel = nullptr;
}

void Gameplay::runGame()
{
	
	cout << "\033[1;33m ====> Darksiders RPG Advantuer <====\n\n";
	cout << "Please enter your character's name\033[0m \n(max 10 characters): \n";
	getline(std::cin, m_name);
	cout << "\n\033[1;36m ===> Welcome: " << m_name << " <===\033[0m\n" << std::endl;

	if (m_name.length() > 10) {
		m_name = m_name.substr(0, 10);
	}
	m_pCharacter->CharacterName(m_name);

	//Select Hero
	cout << "Who is your Hero in this Advancet!\n";
	cout << "[1] War\n[2] Death\n[3] Strife\n[4]Fury\n";
	cin >> m_heroChoice;
	while (!validInput(m_heroChoice, 1, 4)) {
		cout << "Invalid choice. Please select a valid ancestry (1-4): ";
		cin >> m_heroChoice;
	}
	m_pCharacter->SetHeroName(m_heroChoice);

	//Select Ability
	cout << "Select your Ability1!\n";
	cout << "[1] Red Rider\n[2] Harvester\n[3] No Mercy\n[4]slashing\n";
	cin >> m_classChoice;
	while (!validInput(m_classChoice, 1, 4)) {
		cout << "Invalid choice. Please select a valid ancestry (1-4): ";
		cin >> m_classChoice;
	}
	m_pCharacter->SetHeroClass(m_classChoice);
	
	m_pCharacter->displayCharacter();
	
	m_pPlayer->DisplayInventory();
	

	/*m_pPlayer->LightAttack(*m_pEnemy);
	m_pPlayer->HeavyAttack(*m_pEnemy);
	m_pEnemy->DisplayEnemy()*/;
	cout << "\n";
	cout << "\n";
	
	cout << "Choose a level (1-4) or 0 to quit: \n";
	cin >> m_choice;
	m_pLevel->MoveToLevel(m_choice);
	

	
}

bool Gameplay::validInput(int choice, int min, int max)
{
	return choice >= min && choice <= max;
}
