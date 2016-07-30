
#include <Siv3D.hpp>
#include "DataManager.h"
void Main()
{
	const Font font(30);
	DataManager dataManager;
	dataManager.read();

	while (System::Update())
	{
		font(L"ようこそ、Siv3D の世界へ！").draw();
		//Println(dataManager.getEnemy(1).name_m);
		Println(dataManager.getSaveData(0).isDefeated_m);
		

		Circle(Mouse::Pos(), 50).draw({ 255, 0, 0, 127 });
	}
}
