//Fundamental of Programing
//Final Project
//Hamidreza Oloumi

#include <iostream>
#include <string>
#include "Character.h"
#include "Gameplay.h"

using namespace std;
char m_choice;



int main() 
{
	bool gameContinue = true;

	while (gameContinue) 
	{
		Gameplay newGame;
		newGame.runGame();

		//Exit Game
		std::cout << "\nWould you like to create another character? \033[1;31m (y/n): \033[0m";
		std::cin >> m_choice;

		if (m_choice == 'n' || m_choice == 'N') {
			gameContinue = false;
		}
		std::cin.ignore();
	}
	cout << "Thank you for playing!\n";
	return 0;
}