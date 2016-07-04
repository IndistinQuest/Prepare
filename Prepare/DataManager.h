#pragma once
#include <algorithm>
#include <Siv3D.hpp>
#include "EnemyData.h"
#include "SaveData.h"

class DataManager
{
private:
	void readEnemyData();
	void readSaveData();
public:
	Array<EnemyData> enemies_m;
	Array<SaveData> data_m;

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

