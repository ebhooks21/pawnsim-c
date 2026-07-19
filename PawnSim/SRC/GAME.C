/**
 * Game.c
 * Author: Eric HOoks
 * Purpose: To implement the Game functions.
 */
#include <stdlib.h>
#include <GRXKEYS.H>
#include "HEADER/GAME.H"
#include "HEADER/SCREEN.H"

/**
 * Function to start thhe game.
 */
void startGame(Game* g) {
	g->screen = createGameScreen();
	(g->screen)->game = g;

	//Initialize the screen
	initScreen(g->screen);

	//Start the game loop
	startGameLoop(g);

	//Destroy the screen
	destroyScreen(g->screen);
}

/**
 * Function to destroy the game.
 */
void destroyGame(Game* g) {
	//Release dynamic memory
	free(g->screen);
}

/**
 * Function to create a screen reference.
 */
Screen* createGameScreen(void) {
	return malloc(sizeof(Screen));
}

/**
 * Function to start the game loop.
 */
void startGameLoop(Game* g) {
	int running = 1;

	//Draw the screen border
	drawScreenBorder(g->screen);

	do {
		if(GrKeyPressed != 0) {
			if(GrKeyRead() == GrKey_Escape) {
				running = 0;
			}
		}
	} while(running == 1);
}
