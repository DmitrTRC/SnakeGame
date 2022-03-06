//
// Created by Dmitry Morozov on 05.03.2022.
//

#include "main.h"


int main () {
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
    }

    return 0;
}