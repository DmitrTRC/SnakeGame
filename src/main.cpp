//
// Created by Dmitry Morozov on 05.03.2022.
//

#include "main.h"


int main () {

    sf::RectangleShape square (sf::Vector2f (100, 100));

    sf::Vector2f squarePosition (800 / 2 - 50, 0);

    float y_speed = 3;
    float x_speed = 3;

    sf::RenderWindow window (sf::VideoMode (800, 600), "Pretty Snake");
    window.setFramerateLimit (60);


    while (window.isOpen ()) {
        sf::Event event{};

        while (window.pollEvent (event)) {
            if (event.type == sf::Event::Closed) {
                window.close ();
            }
            if (event.type == sf::Event::KeyPressed) {
                if (event.key.code == sf::Keyboard::Escape) {
                    window.close ();
                }
            }
        }
        //Physics
        //TODO: Add physics, On x axis.
        square.setPosition (squarePosition);

        squarePosition.y += y_speed;
        squarePosition.x += x_speed;;

        if (squarePosition.x + 100 > 800 || squarePosition.x < 0) {
            x_speed = -x_speed;
        }

        if (squarePosition.y < 0 || squarePosition.y + 100 > 600) {
            y_speed = -y_speed;
        }



        // Render
        window.clear (sf::Color::Black);
        window.draw (square);
        window.display ();
    }


    return 0;
}
