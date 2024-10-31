#include "Player.h"

Player::Player():Character()
{
	m_inventory = { 10, 10, 100 };
	
}

Player::~Player()
{ 
}

void Player::AddItem(const string& item, int amount)
{
	if (item == "Heal Potion") {
		m_inventory.m_healPotion += amount;
	}
	else if (item == "Power Potion") {
		m_inventory.m_powerPotion += amount;
	}
	else if (item == "XP") {
		m_inventory.m_xpAmount += amount;
	}
	cout << amount << " " << item << "(s) addet to your inventory.\n";
}

void Player::RemoveItem(const string& item, int amount)
{
	if (item == "Heal Potion" && m_inventory.m_healPotion >= amount) {
		m_inventory.m_healPotion -= amount;
	}
	else if (item == "Power Potion" && m_inventory.m_powerPotion >= amount) {
		m_inventory.m_powerPotion -= amount;
	}
	else if (item == "XP" && m_inventory.m_xpAmount >= amount) {
		m_inventory.m_xpAmount -= amount;
	}
	else {
		cout << "Not enough " << item << " to remove.\n";
		return;
	}
	cout << amount << " " << item << "(s) removed from inventory.\n";
}

void Player::DisplayInventory() const
{
	cout << "Inventory: \n";
	cout << "Heal Potions: " << m_inventory.m_healPotion << "\n";
	cout << "Power Potions: " << m_inventory.m_powerPotion << "\n";
	cout << "XP Amount: " << m_inventory.m_xpAmount << "\n";
}

void Player::TakeDamage(int damage)
{
}

void Player::LightAttack(Enemy& enemy)
{
	enemy.TakeDamage(Character::m_lightAttack);
}

void Player::HeavyAttack(Enemy& enemy)
{
	enemy.TakeDamage(Character::GetHeavyAttack());
}

void Player::ReceiveXP(int amount)
{
}
