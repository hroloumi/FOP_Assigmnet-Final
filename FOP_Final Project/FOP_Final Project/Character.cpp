#include "Character.h"
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>

Character::Character() :
m_lightAttack(0),
m_Health(0),
m_specialAbility(0),
m_heavyAttack(0)
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
	cout << "--- Health: " << "\033[1;32m" << m_Health << "\033[0m\n";
	cout << "--- Special Ability: " << "\033[1;32m" << m_specialAbility << "\033[0m\n";
	cout << "--- Attack Power: " << "\033[1;32m" << m_lightAttack << "\033[0m\n";
	cout << "--- Heavy Attack power: " << "\033[1;32m" << m_heavyAttack << "\033[0m\n";
	
}

void Character::generateHeroStats()
{
	m_lightAttack = rand() % 150 + 50; //Power between 150 to 200
	m_Health = rand() % 1750 + 350; // Health 1750 to 2000
	m_specialAbility = rand() % 70 + 30; // Special Ability 70 to 100
	m_heavyAttack = rand() % 250 + 50; // Heavy Attack 250 to 300

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

void Character::applyHeroBonus(int heroChoise)
{
	switch (heroChoise) {
	case 1: //War
		m_Health += 20;
		m_specialAbility += 50;
		m_lightAttack += 30;
		m_heavyAttack += 50;
		break;
	case 2://Death
		m_Health += 50;
		m_specialAbility += 70;
		m_lightAttack += 50;
		m_heavyAttack += 20;
		break;

	case 3://Strife
		m_Health -= 10;
		m_specialAbility += 20;
		m_lightAttack -= 5;
		m_heavyAttack += 10;
		break;

	case 4://Fury
		m_Health -= 20;
		m_specialAbility += 30;
		m_lightAttack += 10;
		m_heavyAttack += 20;
		break;
	}
}
