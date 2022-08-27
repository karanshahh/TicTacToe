#include <iostream>
#include <vector>

using namespace std;

void draw() {
    std::cout << "Enter the number to place your X/O on that position: \n\n";
    std::cout << "     |     |      \n";
    std::cout << "  0  |  1  |  2    \n";
    std::cout << "_____|_____|_____ \n";
    std::cout << "     |     |      \n"; 
    std::cout << "  3  |  4  |  5    \n";
    std::cout << "_____|_____|_____ \n";
    std::cout << "     |     |      \n";
    std::cout << "  6  |  7  |  8    \n";
    std::cout << "     |     |      \n";
 
    std::cout << "\n";

}

void draw(vector<char> board) {
    std::cout << "     |     |      \n";
    std::cout << "  " << board[0] << "  |  " << board[1] << "  |  " << board[2] << "\n";
    std::cout << "_____|_____|_____ \n";
    std::cout << "     |     |      \n";
    std::cout << "  " << board[3] << "  |  " << board[4] << "  |  " << board[5] << "\n";
    std::cout << "_____|_____|_____ \n";
    std::cout << "     |     |      \n";
    std::cout << "  " << board[6] << "  |  " << board[7] << "  |  " << board[8] << "\n";
    std::cout << "     |     |      \n";
    std::cout << "\n";
    

}
 
bool check_board(vector<char> board) {
    // includes logic for either player winning the game, or draw.
    if ((board[0] == board[1] == board[2]) ||
    (board[3] == board[4] == board[5]) ||
    (board[6] == board[7] == board[8]) ||
    (board[0] == board[4] == board[8]) ||
    (board[2] == board[4] == board[6]) ||
    (board[0] == board[3] == board[6]) ||
    (board[1] == board[4] == board[7]) ||
    (board[2] == board[5] == board[8])) 
    {
        return true;
    }
    return false;
 }