/**
 * File name: PawnSim.cpp
 * Author: Eric Hooks, 2026
 * Purpose: Entry point for the PawnSim game.
 */

 #include <iostream>
 #include "HEADER/Game.h"

 int main() {
	//Create a new game instance
	Game* game = new Game("Ye Olde Pawn Shoppe");

	std::cout << game->getName() << std::endl;

	delete game;

	return 0;
 }