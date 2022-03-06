//
// Created by Dmitry Morozov on 05.03.2022.
//

#include "main.h"


int main () {
    sf::RenderWindow window (sf::VideoMode (1024, 768), "SFML works!"); // Create window
    window.setFramerateLimit (60); // We set 60 fps limit in order to avoid the game to be too fast.

    sf::RectangleShape rectangle (sf::Vector2f (100.f, 100.f));
    sf::Vector2f rectangle_position (300, 300); // We will use this variable to store the position of the rectangle.

    rectangle.setPosition (rectangle_position); // We set the position of the rectangle.
    rectangle.setFillColor (sf::Color::Green); // We set the color of the rectangle.

    float rectangle_speed_x = 3; // We set the speed of the rectangle.
    float rectangle_speed_y = 3; //



    // Create rectangle
    while (window.isOpen ()) {
        sf::Event event;

        while (window.pollEvent (event)) {
            if (event.type == sf::Event::Closed) {
                window.close ();
            }
            if (event.type == sf::Event::KeyPressed) {
                switch (event.key.code) {
                    case sf::Keyboard::Up:
                        rectangle_speed_y *= 1.5;
                        rectangle_speed_x *= 1.5;
                        break;
                    case sf::Keyboard::Down:
                        rectangle_speed_y *= 0.5;
                        rectangle_speed_x *= 0.5;
                        break;
                    case sf::Keyboard::Escape:
                        window.close ();
                        break;
                    default:
                        break;
                }

            }

        }

    //Physics
    if (rectangle_position.x < 0 || rectangle_position.x + rectangle.getSize ().x >= window.getSize ().x) {
        rectangle_speed_x = -rectangle_speed_x;
    }

    if (rectangle_position.y < 0 || rectangle_position.y + rectangle.getSize ().y >= window.getSize ().y) {
        rectangle_speed_y = -rectangle_speed_y;
    }

    rectangle_position.x += rectangle_speed_x;
    rectangle_position.y += rectangle_speed_y;
    rectangle.setPosition (rectangle_position);

    //Render
    window.clear (sf::Color::Black);
    window.draw (rectangle);
    window.display ();
}

return 0;
}