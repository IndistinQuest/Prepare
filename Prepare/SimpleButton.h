#pragma once
#include "BasicButton.h"
#include<Siv3D.hpp>

class SimpleButton :
    public BasicButton
{
private:
    double color_m;
    RoundRect rect_m;
public:
    void draw()const;
    void onClicked()override;
    SimpleButton(double const color, RoundRect shape);
    ~SimpleButton();
};

