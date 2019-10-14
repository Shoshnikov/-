#pragma once
using namespace System;

ref class Competitor
{
private:
	String^ name;
	String^ patronymic;
	String^ lastname;
	int score;
	static int ID;
	int PersonalID;

	void makeID();

public:

	Competitor competitor();

	Competitor competitor(String^ name, String^ patronymic, String^ lastname, int score);

	String^ GetName();
	void SetName(String^ name);

	String^ GetPatronymic();
	void SetPatronymic(String^ patronymic);

	String^ GetLastname();
	void SetLastname(String^ lastname);

	int GetScore();
	void SetScore(int score);

	int GetPersonalID();
};

