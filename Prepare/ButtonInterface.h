#pragma once
class ButtonInterface
{
public:
    enum class State
    {
        MOUSE_OVER,
        PRESSED,
        RELEASED,
        LEFT,
        REMOVED,
    };
    virtual void onClicked() = 0;
    virtual void update() = 0;
    virtual State getState() = 0;
    virtual bool isEnabled()const = 0;
    virtual ~ButtonInterface() = default;
};

