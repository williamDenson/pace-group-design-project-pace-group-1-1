enum GameStatus
{
    INIT,   //Flag board needs to be initilized
    PLAY,   //Flag game is being played
    WIN,    //Flag to prompt user as winner guesses<x
    LOSE,   //Flag to prompt user as loser guesses>x
};
enum TileType
{
    WATER,  //Flag is open water space
    SHIP,   //Flag if contains ship
};
struct Tile
{
    TileType type;      //enum for water or ship
    char outputStatus = '~'; // default outputted state is ocean represented by '~'
    bool hit = false;
};

struct GameState
{
    GameStatus status;  //status of current came
    const int boardSize = 10; //max board size
    Tile board[boardSize][boardSize]; //main board for game
};
