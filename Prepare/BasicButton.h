#pragma once
#include "ButtonInterface.h"
#include<Siv3D.hpp>

class BasicButton :
    public ButtonInterface
{
private:
    State state_m = State::LEFT;
    bool isEnabled_m = true;
    Shape shape;
public:
    BasicButton(Shape shape);
    virtual void update()override;
    State getState()override;
    bool isEnabled()const;
    void enable();
    void disable();
    virtual ~BasicButton() = default;
protected:
    void setState(State state);
};

