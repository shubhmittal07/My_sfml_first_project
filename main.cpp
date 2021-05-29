#include <SFML/Graphics.hpp>
#include <iostream>

sf::Vector2f viewSize(1024,780);
sf::VideoMode vm(viewSize.x,viewSize.y);
sf::RenderWindow window(vm,"My first SFML test",sf::Style::Default);


int main()
{
    while(window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }
        window.clear(sf::Color::Red);
        window.display();
    }
    
    return 0;
}