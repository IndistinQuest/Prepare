#include "ButtonManager.h"
#include"ButtonInterface.h"
#include<algorithm>

ButtonManager::ButtonManager()
{}


ButtonManager::~ButtonManager()
{}

std::list<std::shared_ptr<ButtonInterface>> ButtonManager::buttons_m;



void ButtonManager::add(std::shared_ptr<ButtonInterface> const &button)
{
    buttons_m.emplace_back(button);
}


void ButtonManager::update()
{
    std::for_each(buttons_m.begin(), buttons_m.end(), [](std::shared_ptr<ButtonInterface> const &button) {
        switch (button->getState()) {
        default:
            break;
        }
    }
}
