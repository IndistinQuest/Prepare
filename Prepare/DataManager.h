#pragma once
#include "EnemyData.h"
#include "SaveData.h"

class DataManager
{
public:
	DataManager();
	~DataManager();

	int getNumOfEnemies();
	EnemyData getEnemy(int id);
	SaveData getSaveData(int id);
	void setSaveData(int id, bool defeated);

	void read();
	void writeSaveData();
};

