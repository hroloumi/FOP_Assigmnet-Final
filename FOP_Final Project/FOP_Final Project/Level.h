#pragma once
#include <string>

using namespace std;

class Level
{
public:
	Level(string name, string description, bool locked);

	void SetLevelLocked(bool locked);

	string Getlevelname();
	string GetlevelDescription();
	bool levelIsLocked();


private:

	string m_levelname;
	string m_levelDescription;
	bool m_levellocked;

};

