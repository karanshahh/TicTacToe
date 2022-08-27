#include <iostream>
#include "ttt_functions.hpp"
#include <vector>
using namespace std;

int main() {
    
    vector<char> board = {'0', '1', '2', '3', '4', '5', '6', '7', '8'};

    draw();
    for (int i = 0; i < 5; i++) {
        char input;
        int position;

        // take input from player 1
        cout << "Player 1's turn, please enter 'X' or 'O' and enter position (eg: X 6): ";
        cin >> input >> position;
        board[position] = input;
        draw(board);
        if (check_board(board)) {
            cout << "Game over! Player 1, YOU WIN!\n";
            break;
        }
        
        // take input from player 2
        cout << "Player 2's turn,please enter 'X' or 'O' and enter position (eg: O 3): ";
        cin >> input >> position; 
        board[position] = input;
        draw(board);
        if (check_board(board)) {
            cout << "Game over! Player 2, YOU WIN!\n";
            break;
        }   
    }

    if (!check_board(board)) {
        cout << "BOOM! It's a draw!\n";
    }

}