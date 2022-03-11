//
// Created by Dmitry Morozov on 05.03.2022.
//

#include "main.h"


int main () {
    sf::CircleShape shape(50);
    shape.setFillColor(sf::Color(100, 250, 50));
    shape.setOutlineColor(sf::Color(100, 150, 250));


    sf::CircleShape square(80, 4);
    square.setFillColor(sf::Color(100, 250, 50));
    square.setPosition(100, 100);

    
    sf::CircleShape octagon(80, 8);
     octagon.setFillColor(sf::Color(100, 250, 50));

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
        // Render
        window.clear (sf::Color::Black);
        window.draw (shape);
        window.draw (square);
        window.draw (octagon);
    }


    return 0;
}
