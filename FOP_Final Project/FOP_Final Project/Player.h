#pragma once
#include "Character.h"
#include "Enemy.h"
#include <iostream>
#include <string>

using namespace std;
struct Inventory {
	int m_healPotion;
	int m_powerPotion;
	int m_xpAmount;
};

class Player : public Character
{
public:
	Player();
	~Player();
	//void PlayerInventory();
	void TakeDamage(int damage);
	void LightAttack(Enemy& enemy);
	void HeavyAttack(Enemy& enemy);
	void SpecialAttack(Enemy& enemy);
	void ReceiveXP(int amount);

	int GetXP();
	int GetDamage();
	
	void SetXP(int newXP);
	void SetDamage(int newDamage);


	void AddItem(const string& item, int amount);
	void RemoveItem(const string& item, int amount);
	void DisplayInventory() const;


private:
		
	int m_playerXP;
	int m_palayeDamage;

	Inventory m_inventory;


};

