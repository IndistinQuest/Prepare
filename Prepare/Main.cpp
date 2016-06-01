
# include <Siv3D.hpp>
#include"ButtonManager.h"
#include"SimpleButton.h"
void Main()
{
	const Font font(30);
    std::shared_ptr<SimpleButton> button = std::make_shared<SimpleButton>(0, RoundRect(50, 50, 100, 50, 5));
    ButtonManager::add(button);

	while (System::Update())
	{
        ButtonManager::update();
        button->draw();
		font(L"ようこそ、Siv3D の世界へ！").draw();

		//Circle(Mouse::Pos(), 50).draw({ 255, 0, 0, 127 });
	}
}
