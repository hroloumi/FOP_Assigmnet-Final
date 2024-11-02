#include "Level.h"

Level::Level(string name, string description, bool locked):

	m_levelname(name),
	m_levelDescription(description),
	m_levellocked(locked)
{
	m_levellocked = false;
}

void Level::SetLevelLocked(bool locked)
{
	m_levellocked = locked;
}

string Level::Getlevelname()
{
	return m_levelname;
}

string Level::GetlevelDescription()
{
	return m_levelDescription;
}

bool Level::levelIsLocked()
{
	return m_levellocked;
}
