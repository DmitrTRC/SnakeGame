//
// Created by Dmitry Morozov on 23/3/22.
//

#ifndef SNAKEGAME_STATE_HPP
#define SNAKEGAME_STATE_HPP

#include <SFML/Graphics.hpp>


class State {
public:
    State (); // Default constructor

    ~State (); // Destructor

    virtual bool switchState ();

    virtual void updateView (double) = 0;

    virtual void draw (sf::RenderWindow) = 0;

    virtual void processEvent (double , sf::Vector2f mousePos) = 0;

    virtual void handleInput (double ) = 0;

    virtual void handleQuit ();

    bool getQuitState (bool ) const;

    void setQuitState (bool );

    void setScoreHolder (int );

    int getScoreHolder () const;

private:
    bool quitState{};
    int scoreHolder{};
};


#endif //SNAKEGAME_STATE_HPP
