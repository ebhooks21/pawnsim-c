/**
 * Filename: Game.cpp
 * Author: Eric Hooks, 2026
 * Purpose: Implementation file for the Game class, which manages the overall game state and logic.
 */

#include "HEADER/Game.h"
#include <string>

//Constructor for the Game class
Game::Game(std::string name) {
	gName = name;
}

//Destructor for the Game class
Game::~Game() {
}

//Method to get the name of the game
std::string Game::getName() {
	return gName;
}
