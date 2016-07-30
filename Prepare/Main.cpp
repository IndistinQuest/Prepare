
#include <Siv3D.hpp>
#include "DataManager.h"
void Main()
{
	const Font font(30);
	DataManager dataManager;
	Println(dataManager.getSaveData(9999).isDefeated_m);
	while (System::Update())
	{
		font(L"ようこそ、Siv3D の世界へ！").draw();
		//Println(dataManager.getNumOfEnemies());
		Circle(Mouse::Pos(), 50).draw({ 255, 0, 0, 127 });
	}
}
