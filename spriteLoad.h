#ifndef spriteLoad_H
#define spriteLoad_H
#include <SFML/Graphics.hpp>
#include <iostream>
#include <string>

class spriteLoad
{
    private:
        sf::Texture texture1;
        sf::Sprite sprite1;
    public:
        void loadSprite(std::string &path);
        void Draw(sf::RenderWindow &window) const;
        void setSize(sf::Vector2f &viewSize);
};

#endif