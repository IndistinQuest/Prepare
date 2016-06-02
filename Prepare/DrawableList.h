#pragma once

#include <map>
#include <memory>
#include <algorithm>
#include "Drawable.h"

class DrawableList
{
private:
    std::multimap<int, std::shared_ptr<Drawable>> m_drawables;
public:
    DrawableList() = default;
    ~DrawableList();
public:
    void add(std::shared_ptr<Drawable> drawable);
    void drawAll() const;
};

