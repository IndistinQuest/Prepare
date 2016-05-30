#pragma once
#include <Siv3D.hpp>
class EnemyData
{
private:
	int id_m;
	String name_m;
	
	String collectAnswer_m;
	String description_m;
	String class_m;

public:
	class Messages
	{
		String onContact_m;
		String onPlayerWon_m;
		String onPlayerLost_m;
	};
	class Answers
	{
		Array<String> weapon_m;
		Array<String> magic_m;
		Array<String> special_m;
	};

public:
	EnemyData();
	~EnemyData();
};

