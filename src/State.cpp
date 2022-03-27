//
// Created by Dmitry Morozov on 23/3/22.
//

#include "State.h"
#include <iostream>


State::State () {
    quitState = false;
    scoreHolder = 0;
}

State::~State () {
    std::cout << "State destructor called" << std::endl;
}

void State::setQuitState (bool quit) {
    quitState = quit;
}

bool State::getQuitState (bool state) const {
    return quitState;
}

void State::handleQuit () {
    if (sf::Keyboard::isKeyPressed (sf::Keyboard::Escape)) {
        quitState = true;
    }
}

void State::setScoreHolder (int score) {
    scoreHolder = score;
}

int State::getScoreHolder () const {
    return scoreHolder;
}

bool State::switchState () {
    return false; // default
}



