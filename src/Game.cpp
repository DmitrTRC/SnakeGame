//
// Created by Dmitry Morozov on 23/3/22.
//

#include <iostream>
#include "Game.hpp"
#include "Game_state.hpp"


Game::Game () {
    std::cout << "Game class constructor" << std::endl;

}

Game::~Game () {
    std::cout << "Game is over" << std::endl;

}

void Game::start () {
    std::cout << "Game started" << std::endl;
}

void Game::updateFrame () {}

void Game::drawFrame () {}

void Game::processFrame () {}

void Game::run () {}

void Game::initStates () {}