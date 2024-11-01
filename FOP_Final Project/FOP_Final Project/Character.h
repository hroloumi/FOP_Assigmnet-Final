#pragma once
#include <string>

using namespace std;

class Character
{
public:
	Character();
	~Character();
	void CharacterName(string playerName);
	void SetHeroName(int heroName);
	void SetHeroClass(int classChoise);
	void displayCharacter() const;
	void generateHeroStats();
	void SetHeroHealth();

	void SetLightAttack(int light);

	string getHeroName(int heroChoise) const;
	string getClassName(int classChoise) const;

	int& GetHeroHealth();
	int& GetLightAttack();
	int& GetHeavyAttack();
	int& GetSpecialAbility();


protected:

	string m_Name;
	string m_HeroName;
	string m_HeroClass;
	int m_maxHealth;
	int m_lightAttack, m_currentHealth, m_specialAbility, m_heavyAttack;

	void applyHeroBonus(int heroChoise);

};

