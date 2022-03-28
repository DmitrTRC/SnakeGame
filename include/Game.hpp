//
// Created by Dmitry Morozov on 23/3/22.
//

#ifndef SNAKEGAME_GAME_HPP
#define SNAKEGAME_GAME_HPP

#include "SFML/Graphics.hpp"
#include "State.hpp"
#include <stack>


class Game {
public:
    Game (); // Constructor

    ~Game (); // Destructor
private:
    void start (); // Start game
    void updateFrame (); //Updates all components in game
    void drawFrame (); //Draws all Components in game
    void processFrame (); //Processes all components in game
    void run (); //Main Loop
    void initStates (); //Initializes all the States of the Game

private:

    sf::RenderWindow window;

    std::stack<State *> states; //Holds all the States in the Game

    //dt == the Speed of Our Computer Specific to every Computer
    double dt;
    int score; //Saves the Score


};


#endif //SNAKEGAME_GAME_HPP
