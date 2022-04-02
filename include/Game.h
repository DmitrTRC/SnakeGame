//
// Created by Dmitry Morozov on 2/4/22.
//

#ifndef SNAKEGAME_GAME_H
#define SNAKEGAME_GAME_H


class Game {
public:
    Game ();

    ~Game ();

    void start ();

private:
    const float Window_width = 1024.0f;
    const float Window_height = 768.0f;

};


#endif //SNAKEGAME_GAME_H
