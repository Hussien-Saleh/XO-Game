#ifndef XO_GAME_H
#define XO_GAME_H

#include <stdio.h>
#include <stdbool.h>

char player1_side;  // player 1 selection side X or O
char player2_side;  // player 2 selection side X or O


/****************************** FUNCTION PROTOTYPES***************************/

/* 
 * A function call to select playing sides from the players,
 * the players are only allowed to enter two values either X or O
 * @param
 */

void select_side();

/* 
 * A function to display and update the XO game board
 * @param position, positions of the board matrix
 */

void display_board(char* position);

/* 
 * A function to check if there is horizontal match and returns true to end the game
 */

bool horizontal_check();

/* 
 * A function to check if there is vertical match and returns true to end the game
 */

bool vertical_check();

/* 
 * A function to check if there is diagonal match and returns true to end the game
 */

bool diagonal_check();

/* 
 * A function to check if a player has already won
 */

bool win();

/* 
 * A function to check if all positions have been replaced and no winner - DRAW
 */

bool game_over();

/* 
 * A function to start the game, switch the game turn between the players and update the xo board
 */

void play_game();

/* 
 * A function call for the player 1 turn to play to select a valid position and replace it with the chosen side
 */


void player1_turn();

/* 
 * A function call for the player 2 turn to play to select a valid position and replace it with the chosen side
 */

void player2_turn();

#endif
 