/**
 * Filename: Game.h
 * Author: Eric Hooks, 2026
 * Purpose: Header file for the Game class, which manages the overall game state and logic.
 */
#include <string>

#ifndef GAME_H
#define GAME_H

//Define the game class
class Game {
	//Private instance variables
	private:
		//Variable for the Game's name
		std::string gName;
		
	//Public methods
	public:
		//Constructor for the Game class
		Game(std::string name);

		//Destructor for the Game class
		~Game();

		//Method to get the name of the game
		std::string getName();
};

#endif
