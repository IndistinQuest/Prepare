#include "SimpleButton.h"



SimpleButton::SimpleButton(double const color, RoundRect rect)
    :BasicButton(Shape(rect)), color_m(color), rect_m(rect)
{}


void SimpleButton::draw() const
{
    ;
    switch (getState()) {
    case State::LEFT:
        rect_m.draw(HSV(color_m, 1.0, 0.9));
        break;
    case State::MOUSE_OVER:
        rect_m.draw(HSV(color_m, 1.0, 0.9)).drawFrame(-4, -6, HSV(color_m, 1.0, 0.9));
        break;
    case State::PRESSED:
        rect_m.draw(HSV(color_m, 1.0, 0.5));
        break;
    case State::RELEASED:
        rect_m.draw(HSV(color_m, 1.0, 0.9));
        break;
    default:
        break;
    }
}

void SimpleButton::onClicked()
{
    setState(State::REMOVED);
}

SimpleButton::~SimpleButton()
{}
