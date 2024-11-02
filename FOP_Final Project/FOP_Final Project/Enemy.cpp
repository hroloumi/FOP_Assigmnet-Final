#include "Enemy.h"

Enemy::Enemy(string name, int health, int attack, int xp, bool alive):
	m_Name(name),
	m_Health(health),
	m_AttackDamage(attack),
	m_XPAmount(xp),
	m_isDead(false)
{
}

Enemy::~Enemy()
{
}

void Enemy::DisplayEnemy()
{
	cout << "Enemy IS looking at you and invite you fight\n";
	cout << "Name: " << m_Name << "\n";
	cout << "Health: " << m_Health << "\n";
	cout << "AttacK Damage: " << m_AttackDamage << "\n";
	cout << "XP Amount: " << m_XPAmount << "\n";
}

void Enemy::TakeDamage(int damage)
{
	m_Health -= damage;
	if (m_Health <= 0) {
		m_isDead = true;
	}
}



int Enemy::GetHealth()
{
	return m_Health;
}

int Enemy::GetAttackDamage(int damage)
{
	return m_AttackDamage;
}

int Enemy::GetXPAmount(int XP)
{
	return m_XPAmount;
}

bool Enemy::GetIsAlive(bool alive)
{
	return m_isDead = false;
}
