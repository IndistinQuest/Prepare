
# include <Siv3D.hpp>
#include"ButtonManager.h"
#include"SimpleButton.h"
void Main()
{
	const Font font(30);
    std::shared_ptr<SimpleButton> button = std::make_shared<SimpleButton>(RoundRect(50, 50, 100, 50, 5), 0, L"Jumpaku", Palette::White);
    ButtonManager::add(button);
}
