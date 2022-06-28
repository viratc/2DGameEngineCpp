#include "Game.h"
#include <iostream>

int main() {

    Game game;
    
    game.Initialize();
    game.Run();
    game.Destroy();

    return 0;
}
