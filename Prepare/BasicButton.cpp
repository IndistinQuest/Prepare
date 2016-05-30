#include "BasicButton.h"



BasicButton::BasicButton(Shape shape)
    :shape(shape)
{}

void BasicButton::update()
{

}
BasicButton::State BasicButton::getState()
{
    return state_m;
}
void BasicButton::setState(State state)
{
    state_m = state;
}
bool BasicButton::isEnabled()const
{
    return isEnabled_m;
}
void BasicButton::enable()
{
    isEnabled_m = true;
}
void BasicButton::disable()
{
    isEnabled_m = false;
}


BasicButton::~BasicButton()
{}
