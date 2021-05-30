#include <SFML/Graphics.hpp>
#include <iostream>
#include <string>


class Sprite
{
    private:
        sf::Texture texture1;
        sf::Sprite sprite1;
        std::string path;
    public:
        Sprite()
        {
            texture1.loadFromFile(path);
            sprite1.setTexture(texture1);
        }
        void setSize(sf::Vector2f viewSize)
        {
            sprite1.setScale(
            viewSize.x/sprite1.getLocalBounds().width,
            viewSize.y/sprite1.getLocalBounds().height);
        }
        void Draw(sf::RenderWindow window)
        {
            window.draw(sprite1);
        }
};