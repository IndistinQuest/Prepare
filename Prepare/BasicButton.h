#pragma once
#include "ButtonInterface.h"
#include<Siv3D.hpp>

class BasicButton :
    public ButtonInterface
{
private:
    State state_m = State::LEFT;
    bool isEnabled_m = true;
    Shape shape_m;
public:
    BasicButton(Shape shape);
    virtual void transition()override;
    State getState()const override;
    bool isEnabled()const;
    void enable();
    void disable();
    void setState(State state);
    virtual ~BasicButton() = default;
protected:
    void setState(State state);
};

