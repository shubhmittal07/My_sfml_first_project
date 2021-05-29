#include <SFML/Graphics.hpp>
#include <iostream>

sf::Vector2f viewSize(1024,780);
sf::VideoMode vm(viewSize.x,viewSize.y);
sf::RenderWindow window(vm,"My first SFML test",sf::Style::Default);
sf::Texture skyTexture;
sf::Sprite skySprite;

void init()
{
    skyTexture.loadFromFile("Assets/graphics/sky.png");
    skySprite.setTexture(skyTexture);
}
void draw()
{
    window.draw(skySprite);
}
int main()
{
    init();
    while(window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }
        window.clear(sf::Color::Red);
        draw();
        window.display();
    }
    
    return 0;
}