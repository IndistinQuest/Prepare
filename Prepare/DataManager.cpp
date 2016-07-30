#include "DataManager.h"



DataManager::DataManager()
{
	enemyReader_m = JSONReader(L"../JSONData/Enemy.json");
	saveDataReader_m = CSVReader(L"../CSVData/SaveData.csv");
	if (!saveDataReader_m || !enemyReader_m)
	{
		return;
	}
}


DataManager::~DataManager()
{
}

int DataManager::getNumOfEnemies()
{
	return enemies_m.size();
}

EnemyData DataManager::getEnemy(int id)
{
	auto findFromID = [id](EnemyData enemy) {return enemy.id_m == id; };
	return *std::find_if(enemies_m.begin(), enemies_m.end(), findFromID);
}
SaveData DataManager::getSaveData(int id) 
{
	auto findFromID = [id](SaveData obj) {return obj.id_m == id; };
	return *std::find_if(saveData_m.begin(), saveData_m.end(), findFromID);
}
void DataManager::setSaveData(int id, bool defeated)
{

}

void DataManager::read()
{
	for (auto& object : enemyReader_m[L"Enemy"].getObject())
	{
		EnemyData enemy;

		enemy.id_m = object.second[L"id"].get<int32>();
		enemy.name_m = object.second[L"name"].get<String>();

		enemy.messages_m.onContact_m = object.second[L"messages"][L"onContact"].get<String>();
		enemy.messages_m.onPlayerWon_m = object.second[L"messages"][L"onPlayerWon"].get<String>();
		enemy.messages_m.onPlayerLost_m = object.second[L"messages"][L"onPlayerLost"].get<String>();


		for (const auto& weapon : object.second[L"Answers"][L"weapon"].getArray())
		{
			enemy.answers_m.weapon_m.push_back(weapon.get<String>());
		}
		for (const auto& magic : object.second[L"Answers"][L"magic"].getArray())
		{
			enemy.answers_m.magic_m.push_back(magic.get<String>());
		}
		for (const auto& special : object.second[L"Answers"][L"special"].getArray())
		{
			enemy.answers_m.weapon_m.push_back(special.get<String>());
		}

		enemy.description_m = object.second[L"description"].get<String>();
		enemy.class_m = object.second[L"class"].get<String>();

		enemies_m.push_back(enemy);
	}

	for (int i = 0; i < saveDataReader_m.rows; ++i)
	{
		SaveData saveData;
		saveData.id_m = saveDataReader_m.get<int>(i, 0);
		saveData.isDefeated_m = saveDataReader_m.get<bool>(i, 1);
		saveData_m.push_back(saveData);
	}

}
void DataManager::writeSaveData()
{

}


