#include <iostream>
#include "ttt_functions.hpp"
#include <vector>
using namespace std;

int main() {
    
    vector<char> board;
    
    for (int i = 0; i < 9; i++) {
        board.push_back('x');

        // take input from player 1
        char input;
        cout << "Player 1's turn, please enter 'X' or 'O': ";
        cin >> input;
        draw();

        cout << "Player 2's turn, please enter 'X' or 'O': ";
        cin >> input; 
        draw();
    }
    



}