//
// Created by Dmitry Morozov on 23/3/22.
//

#include <iostream>
#include "Game.h"


Game::Game () {
    std::cout << "Game class constructor" << std::endl;

}

Game::~Game () {
    std::cout << "Game is over" << std::endl;

}

void Game::start () {
    std::cout << "Game started" << std::endl;
}
