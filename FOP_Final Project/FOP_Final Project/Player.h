#pragma once
#include <iostream>
#include <vector>
#include <string>

using namespace std;


class Player
{
public:
	Player();
	~Player();
	void PlayerInventory();
	void TakeDamage(int damage);
	void LightAttack(Player& enemy);
	void HeavyAttack(Player& enemy);
	void ReceiveXP(int amount);

	int GetHelth() const;
	int GetXP() const;
	int GetDamage() const;
	const vector<string> GetInventory() const;

	void SetHealth(int newHealth);
	void SetXP(int newXP);
	void SetDamage(int newDamage);


private:

	vector <std::string> m_playerInventory;
	int m_playerHelth;
	int m_playerXP;
	int m_palayeDamage;

};

