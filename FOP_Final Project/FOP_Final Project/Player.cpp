#include "Player.h"

Player::Player()
{

	m_playerInventory.push_back("A");
	m_playerInventory.push_back("B");
	m_playerInventory.push_back("C");
}

Player::~Player()
{
}

void Player::PlayerInventory()
{
	std::cout << "<------  Hello, Stranger  ------>\n";
	for (int i = 0; i < m_playerInventory.size(); ++i) {
		cout << m_playerInventory[i] << endl;
	}
}

void Player::TakeDamage(int damage)
{
}

void Player::LightAttack(Player& enemy)
{
}

void Player::HeavyAttack(Player& enemy)
{
}

void Player::ReceiveXP(int amount)
{
}
