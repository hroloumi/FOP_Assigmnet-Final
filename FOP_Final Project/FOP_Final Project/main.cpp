//Fundamental of Programing
//Final Project
//Hamidreza Oloumi

#include <iostream>
#include <string>
#include "Gameplay.h"
#include "Player.h"
#include "Enemy.h"

using namespace std;
char m_choice;



int main() 
{
	bool gameContinue = true;
	Gameplay newGame;
	Player newPlayer;
	Enemy newEnemy = Enemy("Bad", 500, 10, 10, true);
	
	while (gameContinue) 
	{
		newGame.runGame();
		newPlayer.DisplayInventory();
		
		newEnemy.DisplayEnemy();
		cout << "pres a to attack enemy!\n";
		
		
	
		newPlayer.LightAttack(newEnemy);
		cout << newEnemy.GetHealth();
		

		//Exit Game
		std::cout << "\nWould you like to create another character? \033[1;31m (y/n): \033[0m";
		std::cin >> m_choice;

		if (m_choice == 'n' || m_choice == 'N') {
			gameContinue = false;
		}
		std::cin.ignore();


	}

	newGame.~Gameplay();
	newPlayer.~Player();
	cout << "Thank you for playing!\n";
	return 0;
}