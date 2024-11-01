#include "Character.h"
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>

Character::Character() :

	m_currentHealth(),
	m_lightAttack(),
	m_specialAbility(),
	m_heavyAttack(),
	m_maxHealth(2000)
{}

Character::~Character()
{

}

void Character::CharacterName(string playerName)
{
	m_Name = playerName;
}

void Character::SetHeroName(int heroName)
{
	m_HeroName = getHeroName(heroName);
	applyHeroBonus(heroName);
}

void Character::SetHeroClass(int classChoise)
{
	m_HeroClass = getClassName(classChoise);
}

void Character::displayCharacter() const
{
	cout << "--- Name: " << "\033[1;36m" << m_Name << "\033[0m\n";
	cout << "--- Hero: " << "\033[1;33m" << m_HeroName << "\033[0m\n";
	cout << "--- Ability: " << "\033[1;31m" << m_HeroClass << "\033[0m\n";
	cout << "--- Health: " << "\033[1;32m" << m_currentHealth << "\033[0m\n";
	cout << "--- Special Ability: " << "\033[1;32m" << m_specialAbility << "\033[0m\n";
	cout << "--- Light Attack: " << "\033[1;32m" << m_lightAttack << "\033[0m\n";
	cout << "--- Heavy Attack: " << "\033[1;32m" << m_heavyAttack << "\033[0m\n";
	
}

//void Character::generateHeroStats()
//{
//	m_lightAttack = rand() % 150 + 50; //Power between 150 to 200
//	m_currentHealth = rand() % 1750 + 350; // Health 1750 to 2000
//	m_specialAbility = rand() % 70 + 30; // Special Ability 70 to 100
//	m_heavyAttack = rand() % 250 + 50; // Heavy Attack 250 to 300
//
//}

void Character::SetHeroHealth()
{
	
	cout << "--- Health: " << "\033[1;32m" << m_currentHealth << "\033[0m\n";
}

void Character::SetLightAttack(int light)
{
	m_lightAttack = light;
}

string Character::getHeroName(int heroChoise) const
{
	switch (heroChoise) 
	{
	case 1: return "War";
	case 2: return "Death";
	case 3: return "Strife";
	case 4: return "Fury";
	default: return "Unknown";
	}
	
}

string Character::getClassName(int classChoise) const
{
	switch (classChoise) 
	{
	case 1: return "Red Rider";
	case 2: return "Harvester";
	case 3: return "No Mercy";
	case 4: return "Slashing";
	default: return "Unknown";
	}
}

int& Character::GetHeroHealth()
{
	return m_currentHealth;
}

int& Character::GetLightAttack()
{
	return m_lightAttack;
}

int& Character::GetHeavyAttack()
{
	return m_heavyAttack;
}

int& Character::GetSpecialAbility()
{
	return m_specialAbility;
}

void Character::applyHeroBonus(int heroChoise)
{
	switch (heroChoise) {
	case 1: //War
		m_currentHealth = rand() % 2000 + 1750; // Health 1750 to 2000;
		m_specialAbility = rand() % 100 + 70; // Special Ability 70 to 100;
		m_lightAttack = rand() % 200 + 150; //Power between 150 to 200;
		m_heavyAttack = rand() % 300 + 250; // Heavy Attack 250 to 300;
		break;
	case 2://Death
		m_currentHealth = rand() % 2000 + 1750; // Health 1750 to 2000;
		m_specialAbility = rand() % 100 + 70; // Special Ability 70 to 100;
		m_lightAttack = rand() % 200 + 150; //Power between 150 to 200;
		m_heavyAttack = rand() % 250 + 50; // Heavy Attack 250 to 300;
		break;

	case 3://Strife
		m_currentHealth = rand() % 2000 + 1750; // Health 1750 to 2000;
		m_specialAbility = rand() % 100 + 70; // Special Ability 70 to 100;
		m_lightAttack = rand() % 200 + 150; //Power between 150 to 200;
		m_heavyAttack = rand() % 250 + 50; // Heavy Attack 250 to 300;
		break;

	case 4://Fury
		m_currentHealth = rand() % 2000 + 1750; // Health 1750 to 2000;
		m_specialAbility = rand() % 100 + 70; // Special Ability 70 to 100;
		m_lightAttack = rand() % 200 + 150; //Power between 150 to 200;
		m_heavyAttack = rand() % 300 + 250; // Heavy Attack 250 to 300;
		break;
	}
}
