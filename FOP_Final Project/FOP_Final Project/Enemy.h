#pragma once
#include <iostream>
#include <string>

using namespace std;


class Enemy
{public:

	Enemy(string name, int health, int attack, int xp, bool alive);
	~Enemy();
	void DisplayEnemy();
	void TakeDamage(int damage);
	void AddDamage();


	int GetHealth();
	int GetAttackDamage(int damage);
	int GetXPAmount(int XP);
	bool GetIsAlive(bool alive);

private:
	string m_Name;
	int m_Health;
	int m_AttackDamage;
	int m_XPAmount;

	bool m_isDead;

protected:

};

