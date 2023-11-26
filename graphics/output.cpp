#include <SFML/Graphics.hpp>
#include <iostream>

int main()
{

    float circleMoveSpeed = 0.000001; 

    sf::RenderWindow window(sf::VideoMode(1280, 720), "Ermmmmm!");

    sf::CircleShape circle(100);

    circle.setFillColor(sf::Color::Green);
    circle.setPosition(300, 300);

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();

            if(event.key.code == sf::Keyboard::W) {
                circleMoveSpeed = 0.5;
            }

            if(event.key.code == sf::Keyboard::S) {
                circleMoveSpeed = 0.5;
            }
            
        }   

        circle.setPosition(circle.getPosition().x + circleMoveSpeed, circle.getPosition().y - circleMoveSpeed);

        window.clear();
        window.draw(circle);
        window.display();
    }

    return 0;
}