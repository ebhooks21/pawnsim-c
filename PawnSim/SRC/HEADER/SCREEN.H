/**
 * Screen.h
 * Author: Eric HOoks
 * Purpose: Definitions for the Screen functions.
 */

#ifndef SCREEN_H
#define SCREEN_H

//Forward declare the game structure
typedef struct game_t Game;

//Define the Screen
typedef struct screen_t {
	//Reference to the game object
	Game* game;
} Screen;

/**
 * Function to initialize the game screen.
 */
void initScreen(Screen* s);

/**
 * Function to destroy the screen.
 */
void destroyScreen(Screen* s);

/**
 * Function to draw the screen border.
 */
void drawScreenBorder(Screen* s);

#endif /* SCREEN_H */
