#include <SFML/Graphics.hpp>
#include <iostream>
#include <string>


sf::Vector2f viewSize(1024,768);
sf::VideoMode vm(viewSize.x,viewSize.y);
sf::RenderWindow window(vm,"My first SFML test",sf::Style::Default);
class spriteLoad
{
    private:
        sf::Texture texture1;
        sf::Sprite sprite1;
    public:
        void loadSprite(std::string &path)
        {
            texture1.loadFromFile(path);
            sprite1.setTexture(texture1);
        }
        void Draw(sf::RenderWindow &window) const
        {
            window.draw(sprite1);
        }

        void setAutoSize(float x,float y)
        {
            sprite1.setScale(x/sprite1.getLocalBounds().width,
            y/sprite1.getLocalBounds().height);
        }
        void setPosition(float x,float y)
        {
            sprite1.setPosition(x,y);
        }
        void setOrigin(float x,float y)
        {
            sprite1.setOrigin(sprite1.getLocalBounds().width/x,sprite1.getLocalBounds().height/y);
        }
};
int main()
{
    spriteLoad skySprite;
    spriteLoad background;
    std::string skySpriteAdd = "Assets/graphics/sky.png";
    std::string bgSpriteAdd = "Assets/graphics/bg.png";

    skySprite.loadSprite(skySpriteAdd);
    skySprite.setAutoSize(viewSize.x,viewSize.y);

    background.loadSprite(bgSpriteAdd);
    background.setAutoSize(viewSize.x,
    viewSize.y-400);
    background.setOrigin(2,1);
    background.setPosition(viewSize.x/2,viewSize.y);

    while(window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }
        window.clear(sf::Color::White);
        skySprite.Draw(window);
        background.Draw(window);
        window.display();
    }
    
    return 0;
}