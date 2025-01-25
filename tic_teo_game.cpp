#include <iostream>
using namespace std;

void display(char board[3][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << board[i][j] << " ";
        }
        cout << endl;
    }
}

bool isfull(char board[3][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (board[i][j] == '-') return false;
        }
    }
    return true;
}

bool iswinner(char board[3][3], char player)
{
    for (int i = 0; i < 3; i++)
    {
        if ((board[i][0] == player && board[i][1] == player && board[i][2] == player) || 
            (board[0][i] == player && board[1][i] == player && board[2][i] == player))
        {
            return true;
        }
    }

    if ((board[0][0] == player && board[1][1] == player && board[2][2] == player) || 
        (board[0][2] == player && board[1][1] == player && board[2][0] == player))
    {
        return true;
    }

    return false;
}

int main()
{
    char player = 'X';
    char board[3][3] = {{'-', '-', '-'}, {'-', '-', '-'}, {'-', '-', '-'}};

    while (true)
    {
        system("cls");
        display(board);
        int row, col;
        cout << "This is the turn of player " << player << endl;
        cout << "Enter row (0, 1, 2): ";
        cin >> row;
        cout << "Enter column (0, 1, 2): ";
        cin >> col;

        if (row >= 0 && row <= 2 && col >= 0 && col <= 2 && board[row][col] == '-')
        {
            board[row][col] = player;
        }
        else
        {
            cout << "Invalid move, try again!" << endl;
            continue;
        }

        if (iswinner(board, player))
        {
            system("cls");
            display(board);
            cout << "Player " << player << " wins!!!" << endl;
            break;
        }

        if (isfull(board))
        {
            system("cls");
            display(board);
            cout << "It's a draw!" << endl;
            break;
        }

        player = (player == 'X') ? 'O' : 'X';
    }

    return 0;
}
