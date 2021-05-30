#include <SFML/Graphics.hpp>
#include <iostream>
#include <string>


sf::Vector2f viewSize(1024,768);
sf::VideoMode vm(viewSize.x,viewSize.y);
sf::RenderWindow window(vm,"My first SFML test",sf::Style::Default);
//sf::Texture skyTexture;
//sf::Sprite skySprite;

// void SpriteLoader(std::string &path,bool dynamicSize)
// {
//     sf::Texture texture1;
//     sf::Sprite sprite1;
//     texture1.loadFromFile(path);
//     sprite1.setTexture(texture1);
//     if(dynamicSize)
//     {
//         sprite1.setScale(
//         viewSize.x/skySprite.getLocalBounds().width,
//         viewSize.y/skySprite.getLocalBounds().height);
//     }
// }
// void init()
// {
//     skyTexture.loadFromFile("Assets/graphics/sky.png");
//     skySprite.setTexture(skyTexture);
//     skySprite.setScale(
//         viewSize.x/skySprite.getLocalBounds().width,
//         viewSize.y/skySprite.getLocalBounds().height);
//         //dynamic way to set the size of background sprites
// }
class spriteLoad
{
    private:
        sf::Texture texture1;
        sf::Sprite sprite1;
    public:
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
};
int main()
{
    spriteLoad skySprite;
    std::string spriteAdd = "Assets/graphics/sky.png";
    skySprite.spriteLoad::loadSprite(spriteAdd);
    skySprite.spriteLoad::setSize(viewSize);
    while(window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }
        window.clear(sf::Color::White);
        skySprite.spriteLoad::Draw(window);
        window.display();
    }
    
    return 0;
}