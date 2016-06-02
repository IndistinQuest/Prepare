#pragma once

#include <Siv3D.hpp>

class Drawable
{
private:
    const uint32 m_layer;
    bool m_isVisible;
public:
    Drawable(const uint32 layer);
    virtual ~Drawable() = default;
public:
    virtual void draw() const = 0;
    void show();
    void hide();
    bool isVisible() const;
    int getLayer() const;
};

