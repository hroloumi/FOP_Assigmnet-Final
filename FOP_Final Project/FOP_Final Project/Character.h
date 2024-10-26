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

	string getHeroName(int heroChoise) const;
	string getClassName(int classChoise) const;

private:

	string m_Name;
	string m_HeroName;
	string m_HeroClass;
	int m_lightAttack, m_Health, m_specialAbility, m_heavyAttack;

	void applyHeroBonus(int heroChoise);

};

