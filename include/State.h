//
// Created by Dmitry Morozov on 23/3/22.
//

#ifndef SNAKEGAME_STATE_H
#define SNAKEGAME_STATE_H

#include <SFML/Graphics.hpp>


class State {
public:
    virtual bool switchState ();

    virtual void updateView (double dt) = 0;

    virtual void draw (sf::RenderWindow) = 0;

    virtual void processEvent (double dt, sf::Vector2f mousePos) = 0;

    virtual void handleInput (double dt) = 0;

    virtual void onQuit ();

    bool getQuitState (bool quit);

    void setQuitState (bool quit);

    void setScoreHolder (int score);

    int getScoreHolder ();

private:
    bool quitState;
    int scoreHolder;
};


#endif //SNAKEGAME_STATE_H
