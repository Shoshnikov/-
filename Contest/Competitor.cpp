#include "Competitor.h"

void Competitor::makeID()
{
	PersonalID = ++ID;
}

Competitor Competitor::competitor()
{
	makeID();
}

Competitor Competitor::competitor(String^ name, String^ patronymic, String^ lastname, int score)
{
	SetLastname(name);
	SetPatronymic(patronymic);
	SetLastname(lastname);
	SetScore(score);
	makeID();


}

String^ Competitor::GetName()
{
	return name;
}

void Competitor::SetName(String^ name)
{
	this->name = name;
}

String^ Competitor::GetPatronymic()
{
	return patronymic;
}

void Competitor::SetPatronymic(String^ patronymic)
{
	this->patronymic = patronymic;
}

String^ Competitor::GetLastname()
{
	return lastname;
}

void Competitor::SetLastname(String^ lastname)
{
	this->lastname = lastname;
}

int Competitor::GetScore()
{
	return score;
}

void Competitor::SetScore(int score)
{
	this->score = score;
}

int Competitor::GetPersonalID()
{
	return PersonalID;
}
