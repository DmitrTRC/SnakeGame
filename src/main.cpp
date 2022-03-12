//
// Created by Dmitry Morozov on 05.03.2022.
//

#include "main.h"


int main () {

    sf::RectangleShape square (sf::Vector2f (100, 100));

    sf::Vector2f squarePosition (800 / 2 - 50, 0);

    float y_speed = 3;

    sf::RenderWindow window (sf::VideoMode (800, 600), "SFML works!");
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
        if ( squarePosition.y < 0 || squarePosition.y + 100 > 600 ) {
            y_speed *= -1;
        }



        // Render
        window.clear (sf::Color::Black);
        window.draw (square);
        window.display ();
    }


    return 0;
}
