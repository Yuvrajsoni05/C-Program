#include <SFML/Graphics.hpp>

int main()
{
    sf::RenderWindow window(sf::VideoMode({800, 600}), "Move Circle");

    sf::CircleShape circle(50);
    circle.setFillColor(sf::Color::Red);

    float x = 350;
    float y = 250;
    float speed = 5;

    while (window.isOpen())
    {
        while (const auto event = window.pollEvent())
        {
            if (event->is<sf::Event::Closed>())
                window.close();
        }

        // Keyboard input
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Left))
            x -= speed;

        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Right))
            x += speed;

        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Up))
            y -= speed;

        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Down))
            y += speed;

        circle.setPosition({x, y});

        window.clear(sf::Color::Black);
        window.draw(circle);
        window.display();
    }
}