// TicTacToe Class Header File
// Zach Akin-Amland
// Owen Hill
// CSCI 3010 Programming Exercise 4
#ifndef TICTACTOE_H
#define TICTACTOE_H
#include <string>

struct Player{
    std::string name;
    std::string symbol;
    int turn_count;
    Player* next;
    Player* prev;
};

struct Position{
    int row;
    int col;
};


class TicTacToe{
    public:
        TicTacToe();                                                //constuctor, initializes board with empty squares
        void initPlayers();                                         // sets player values, connects the players with a doubly linked list
        Position getPlayerTurn();                                   // Gets user input to return a Position object containing the players turn coordinates
        void DisplayBoard();                                        // displays the board
        bool PlaceMarker(Position pos, Player *&current);           // Updates the output of the board
        bool gameOver();                                            // returns true if 9 turns have been taken
        void playGame();                                            // function to run the game until it is over   
    private:
        std::string Board[3][3];                                    // 3x3 array of strings
        Player player1;                                             // X's
        Player player2;                                             // O's
        Player* currentPlayer;                                      // pointer to the current player
};
#endif