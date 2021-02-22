// Rock, paper, scissors.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
    char Y, player1, player2;
    cout << "Would you like to play a game of rock, paper scissors? " << endl;
    cout << "Enter Y if you do or N if you don't want to play again: ";
    cin >> Y;
        if (Y == 'Y' || Y == 'y')
        {
            cout << "Player one please choose either rock, paper or scissors by using R, P or S respectively: ";
            cin >> player1;
            cout << "Now player 2 choose your choice: ";
            cin >> player2;
            if ((player1 == 'R' || player1 == 'r') && (player2 == 'S' || player2 == 's'))
            {
                cout << "Player 1 beats player one wins, rock smashes scissors";
            }
            else if((player1 == 'R' || player1 == 'r') && (player2 == 'P' || player2 == 'p'))
            {
                cout << "Player 2 wins, paper covers rock";
            }
            else if ((player1 == 'S' || player1 == 's') && (player2 == 'R' || player2 == 'r'))
            {
                cout << "Player 2 wins, rock smashes scissors";
            }
            else if ((player1 == 'S' || player1 == 's') && (player2 == 'P' || player2 == 'p'))
            {
                cout << "player 1 wins, scissors cut paper";
            }
            else if ((player1 == 'P' || player1 == 'p') && (player2 == 'R' || player2 == 'r'))
            {
                cout << "Player 1 wins, rock covers paper";
            }
            else if ((player1 == 'P' || player1 == 'p') && (player2 == 'S' || player2 == 's'))
            {
                cout << "Player 2 wins, scissors cut paper";
            }
            else
            {
                cout << "It's a draw";
            }
            cout << endl;
            cout << "Would you like to play again? just enter Y for yes or N for no: ";
            cin >> Y;
        }

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
