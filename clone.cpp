#include <iostream>
using namespace std;

char square[10] = {'o','1','2','3','4','5','6','7','8','9'};

int checkwin();
void board();

int main()
{
	int player = 1,i,number;

    char turn;
    cout << "\n\n\tTic Tac Toe\n\n";

    cout << "Player 1 (X)  -  Player 2 (O)" << endl << endl;
    cout << endl;
    do
    {
        board();
        player=(player%2)?1:2;

        cout << "Player " << player << ", enter a number:  ";
        cin >> number;

        turn=(player == 1) ? 'X' : 'O';

        if (number == 1 && square[1] == '1')

            square[1] = turn;
        else if (number == 2 && square[2] == '2')

            square[2] = turn;
        else if (number == 3 && square[3] == '3')

            square[3] = turn;
        else if (number == 4 && square[4] == '4')

            square[4] = turn;
        else if (number == 5 && square[5] == '5')

            square[5] = turn;
        else if (number == 6 && square[6] == '6')

            square[6] = turn;
        else if (number == 7 && square[7] == '7')

            square[7] = turn;
        else if (number == 8 && square[8] == '8')

            square[8] = turn;
        else if (number == 9 && square[9] == '9')

            square[9] = turn;
        else
        {
            cout<<"Invalid move ";

            player--;
            cin.ignore();
            cin.get();
        }
        i=checkwin();

        player++;
    }while(i==-1);
    board();
    if(i==1)

        cout<<"==>\aPlayer "<<--player<<" win ";
    else
        cout<<"==>\aGame draw";

    cin.ignore();
    cin.get();
    return 0;
}

/*FUNCTION TO RETURN GAME STATUS, 1 FOR GAME IS OVER, -1 FOR GAME IS IN PROGRESS ,O GAME IS OVER */

int checkwin()
{
    if (square[1] == square[2] && square[2] == square[3])

        return 1;
    else if (square[4] == square[5] && square[5] == square[6])

        return 1;
    else if (square[7] == square[8] && square[8] == square[9])

        return 1;
    else if (square[1] == square[4] && square[4] == square[7])

        return 1;
    else if (square[2] == square[5] && square[5] == square[8])

        return 1;
    else if (square[3] == square[6] && square[6] == square[9])

        return 1;
    else if (square[1] == square[5] && square[5] == square[9])

        return 1;
    else if (square[3] == square[5] && square[5] == square[7])

        return 1;
    else if (square[1] != '1' && square[2] != '2' && square[3] != '3' 
                    && square[4] != '4' && square[5] != '5' && square[6] != '6' 
                  && square[7] != '7' && square[8] != '8' && square[9] != '9')

        return 0;
    else
        return -1;
}


/*FUNCTION TO DRAW BOARD OF TIC TAC TOE WITH PLAYERS MARK*/


void board()
{
    system("cls");

    cout << "     |     |     " << endl;
    cout << "  " << square[1] << "  |  " << square[2] << "  |  " << square[3] << endl;

    cout << "_____|_____|_____" << endl;
    cout << "     |     |     " << endl;

    cout << "  " << square[4] << "  |  " << square[5] << "  |  " << square[6] << endl;

    cout << "_____|_____|_____" << endl;
    cout << "     |     |     " << endl;

    cout << "  " << square[7] << "  |  " << square[8] << "  |  " << square[9] << endl;

    cout << "     |     |     " << endl << endl;
}