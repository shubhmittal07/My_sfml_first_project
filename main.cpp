#include <SFML/Graphics.hpp>
#include <iostream>

sf::Vector2f viewSize(1024,780);
sf::VideoMode vm(viewSize.x,viewSize.y);
sf::RenderWindow window(vm,"My first SFML test",sf::Style::Default);


int main()
{
    sf::RectangleShape rect(sf::Vector2f(500.0f,300.0f));
    rect.setFillColor(sf::Color::Yellow);
    rect.setPosition(viewSize.x/2,viewSize.y/2);
    rect.setOrigin(sf::Vector2f(rect.getSize().x/2,rect.getSize().y/2));
    sf::CircleShape circle(100.0f);
    circle.setFillColor(sf::Color::Green);
    circle.setPosition(sf::Vector2f(viewSize.x/2,viewSize.y/2));
    circle.setOrigin(sf::Vector2f(circle.getRadius(),circle.getRadius()));
    while(window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }
        window.clear(sf::Color::Red);
        window.draw(rect);
        window.display();
    }
    
    return 0;
}