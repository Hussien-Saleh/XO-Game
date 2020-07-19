/*
 @author      : Hussien Saleh 
 Here is an application for Tic-Tac-Toe game between two players, X and O,
 who take turns marking the spaces in a 3×3 grid. 
 The player who succeeds in placing three of their marks 
 in a horizontal, vertical, or diagonal row wins the game.
 */


#include "../include/xo_game.h"

static char position []= {'1','2','3','4','5','6','7','8','9'}; // initial XO board game with predefined positions

int main(){

    select_side();
    display_board(position);
    play_game();

    if(game_over()){
        printf("\ngame is over, no winner\n\n");
    }

    return 0;
}



void display_board(char *position){

    printf("_________________________________________________\n");
    printf("|\t\t|\t\t|\t\t|\n");
    printf("|\t%c\t|\t%c\t|\t%c\t|\n", *position, *(position+1),*(position+2));
    printf("_________________________________________________\n");
    printf("|\t\t|\t\t|\t\t|\n");
    printf("|\t%c\t|\t%c\t|\t%c\t|\n", *(position+3), *(position+4),*(position+5));
    printf("_________________________________________________\n");
    printf("|\t\t|\t\t|\t\t|\n");
    printf("|\t%c\t|\t%c\t|\t%c\t|\n", *(position+6), *(position+7),*(position+8));
    printf("_________________________________________________\n");

}

void select_side(){
    
    char side; // side selected by the user either X or O
    printf("\nPlayer 1: please choose your side X or O\n");
    
    do {
        printf("\nyour choice is: ");
        scanf(" %c",&side);
        if (side == 'X'|| side == 'O')
            break;
        else{
            printf("\nplease try again: X or O\n");
        }
    } while (1);

    printf("Player 1: %c\n",side);

    if (side == 'X') {
        player1_side = 'X';
        player2_side = 'O';
        printf("Player 2: %c\n", player2_side);
    }
    else{
        player1_side = 'O';
        player2_side = 'X';
        printf("Player 2: %c\n",player2_side);  
    }  
}

bool horizontal_check(){
    
    return ((*position == *(position+1) && *(position+1) == *(position+2)) ||
        (*(position+3) == *(position+4) && *(position+4)== *(position+5)) ||
        (*(position+6) == *(position+7)&& *(position+7)== *(position+8)));
}
        
bool vertical_check(){

    return ((*position == *(position+3) && *(position+3) == *(position+6)) ||
           (*(position+1) == *(position+4) && *(position+4) == *(position+7)) ||
           (*(position+2)== *(position+5) && *(position+5) == *(position+8)));
}

bool diagonal_check(){

    return ((*position == *(position+4) && *(position+4) == *(position+8)) ||
           (*(position+2) == *(position+4) && *(position+4)== *(position+6)));

}

bool win(){

    if (vertical_check() || horizontal_check() || diagonal_check())
        return true;
    return false;
}

bool game_over(){

    return (*position != '1' && *(position+1) != '2' && *(position+2) != '3' &&
            *(position+3) != '4' && *(position+4)  != '5' && *(position+5) != '6' && 
            *(position+6)  != '7' && *(position+7) != '8' && *(position+8) != '9');
}

void play_game(){

    while (!game_over()){

        player1_turn();
        display_board(position);
        if(win()){
            printf("\nPlayer 1 is the winner\n\n");
            break;
        }

        player2_turn();
        display_board(position);
        if(win()){
            printf("\nPlayer 2 is the winner\n\n");
            break;
        }
    }
}

void player1_turn(){
    char number; // number of position selected by the player

    while(1){
        
        printf("\nPlayer 1, please enter a valid position:  ");
        scanf("\n");
        scanf("%c", &number);
        
        if (number == '1' && *position=='1'){
            *(position) = player1_side;
            break;
        }
        else if (number == '2' && *(position+1)=='2'){
            *(position+1) = player1_side;
            break;
        }
        else if (number == '3' && *(position+2)=='3'){
            *(position+2) = player1_side;
            break;
        }
        else if (number == '4' && *(position+3)=='4'){
            *(position+3) = player1_side;
            break;
        }
        else if (number == '5' && *(position+4)=='5'){
            *(position+4) = player1_side;
            break;
        }
        else if (number == '6' && *(position+5)=='6'){
            *(position+5) = player1_side; 
            break;
        }
        else if (number == '7' && *(position+6)=='7'){
            *(position+6) = player1_side;
            break;
        }
        else if (number == '8' && *(position+7)=='8'){
             *(position+7) = player1_side;
             break;
        }
        else if (number == '9' && *(position+8)=='9'){
            *(position+8) = player1_side;
            break;
        }
        else {
            printf("\n\ninvalid move\n\n"); 
        } 
    }
}

void player2_turn(){

    char number;  // number of position selected by the player

    while(1){
        
        printf("\nPlayer 2, please enter a valid position:  ");
        scanf("\n");
        scanf("%c", &number);
        
        if (number == '1' && *position=='1'){
            *(position) = player2_side;
            break;
        }
        else if (number == '2' && *(position+1)=='2'){
            *(position+1) = player2_side;
            break;
        }
        else if (number == '3' && *(position+2)=='3'){
            *(position+2) = player2_side;
            break;
        }
        else if (number == '4' && *(position+3)=='4'){
            *(position+3) = player2_side;
            break;
        }
        else if (number == '5' && *(position+4)=='5'){
            *(position+4) = player2_side;
            break;
        }
        else if (number == '6' && *(position+5)=='6'){
            *(position+5) = player2_side; 
            break;
        }
        else if (number == '7' && *(position+6)=='7'){
            *(position+6) = player2_side;
            break;
        }
        else if (number == '8' && *(position+7)=='8'){
             *(position+7) = player2_side;
             break;
        }
        else if (number == '9' && *(position+8)=='9'){
            *(position+8) = player2_side;
            break;
        }
        else {
            printf("\n\ninvalid move\n\n"); 
        } 
    }
}