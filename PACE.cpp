#include "PACE.h"
#include <iostream>

using namespace std
//Place the AI ships for the player to play against
//Pre:None
//Post: returned game board with 5 ships placed
void placeShips(GameState &Game);
//Prints current gameBoard to screen
//Pre:Board has been initilized
//Post:Output Board to screen
void printBoard(GameState Game);
//Takes User's input and updates board
//Pre:Ships have been placed
//Post:Board is updated with tile status of chosen tile
void shootMissile(GameState &Game);
//Checks if win conditions have been met
//Pre:Ships have been placed and atleast 1 shot has been fired
//Post returns status of game
GameStatus checkGameStatus(GameState Game);


int main(){
    GameState Game;
    //initial loop to zero out board
    for(int i = 0; i <10;i++)
        for(int j = 0;j<10;j++)
            game.board[i][j].type = WATER;
    placeShips(Game);
    do{
        shootMissile(Game);
        printBoard(Game);
        Game.status = checkGameStatus(Game);

    }while(Game.status!=WIN ^ Game.status!=LOSE)    //loop game till win or lose status is obtained

    return 0;
}
//Places Ships on Board
void placeShips(GameState &Game){
    //get random number to choose starting point on board (x<=10,y<=10)
        //in battle ship there are 1 two length ships, 2 three length ships, 1 four length ships, and 1 five length ship
    //start with five ship as longest, from starting point (where n = size of ship)+n and -n to x and y to find viable spots
        //if one one location can fit the ship place ship between the two points using for loop
            //if more than one possible location user random number to get random direction from viable directions

    //continue process with ships as they get smaller, before choosing which direction ship should be place,
        //double check the status of the tile is water before placing new ship


    cout<<"Ships Placed"


}
//Prints Board to Screen after every round
void printBoard(GameState Game){
    for(int i = 0; i <10;i++){
        for(int j = 0;j<10;j++){
            cout<<game.board[i][j].outputStatus;
        }
        cout<<endl;}

}
//Prompts user for coords, and updates Board based on decision
void shootMissile(GameState &Game){
    int x,y
    //Prompt user for x and y coords

    //if Game.board[x][y].type = SHIP               //if guessed location is ship
        //Game.board[x][y].outputStatus = 'H'       //set tile char to H
        //Game.board[x][y].hit = true
    //if Game.board[x][y].type = WATER              //if guessed location is water
        //Game.board[x][y].outputStatus = '.'       //set tile char to .
        //Game.board[x][y].type = true

}
//Compares current game with uncovered ships to determine status of game
GameStatus checkGameStatus(GameState Game){
    //if for every tile where type = ship also has a hit status of true
        return WIN
    //if not
        return PLAY

}
