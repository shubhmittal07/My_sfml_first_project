#include "spriteLoad.h"
#include <SFML/Graphics.hpp>

// spriteLoad::spriteLoad(std::string &path)
// {
//     texture1.loadFromFile(path);
//     sprite1.setTexture(texture1);
// }

void spriteLoad::loadSprite(std::string &path)
{
    texture1.loadFromFile(path);
    sprite1.setTexture(texture1);
}
void spriteLoad::Draw(sf::RenderWindow &window) const
{
    window.draw(sprite1);
}

void spriteLoad::setSize(sf::Vector2f &viewSize)
{
    sprite1.setScale(viewSize.x/sprite1.getLocalBounds().width,
    viewSize.y/sprite1.getLocalBounds().height);
}
