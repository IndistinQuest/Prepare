#include "Drawable.h"


Drawable::Drawable(const uint32 layer)
    : m_layer(layer)
    , m_isVisible(true)
{
}

void Drawable::show()
{
    m_isVisible = true;
}

void Drawable::hide()
{
    m_isVisible = false;
}

bool Drawable::isVisible() const
{
    return m_isVisible;
}

int Drawable::getLayer() const
{
    return m_layer;
}
