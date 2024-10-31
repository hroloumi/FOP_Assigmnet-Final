#pragma once
#include <string>

using namespace std;

class Gameplay
{
public:
	Gameplay();
	~Gameplay();

	void runGame();

	string m_name;
	int m_heroChoice;
	int m_classChoice;
	char m_choice;
	

	bool validInput(int choice, int min, int max);
};

