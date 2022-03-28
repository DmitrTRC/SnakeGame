//
// Created by Dmitry Morozov on 23/3/22.
//

#include <iostream>
#include "Game.hpp"
#include "Game_state.hpp"


const uint SCREEN_WIDTH = 800;
const uint SCREEN_HEIGHT = 600;

Game::Game () {
    std::cout << "Game class constructor" << std::endl;
    window.create (
            sf::VideoMode (SCREEN_WIDTH, SCREEN_HEIGHT),
            "SnakeGame",
            sf::Style::Close
    );
    dt = 0.0f;
    initStates ();
    score = 0;

}

Game::~Game () {
    std::cout << "Game class destructor" << std::endl;
    while (!states.empty ()) {
        delete states.top ();
        states.pop ();
    }
}


void Game::start () {
    std::cout << "Game starting" << std::endl;
    run ();
}

void Game::updateFrame () {
    if (!states.empty ()) {
        states.top ()->update (dt);

}

void Game::drawFrame () {}

void Game::processFrame () {}

void Game::run () {
    sf::Clock clock;
    dt = clock.restart ().asSeconds ();
    while (window.isOpen ()) {
        sf::Event event{};
        while (window.pollEvent (event)) {
            if (event.type == sf::Event::Closed) {
                window.close ();
            }
        }
        window.clear ();

        updateFrame ();
        processFrame ();
        drawFrame ();

        window.display ();
    }
}

void Game::initStates () {}