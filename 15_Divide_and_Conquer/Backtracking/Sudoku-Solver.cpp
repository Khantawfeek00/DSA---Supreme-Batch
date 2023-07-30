#include <bits/stdc++.h>
using namespace std;
bool isSafe(int row, int col, vector<vector<char>> &board, char value)
{
    for (int i = 0; i < 9; i++)
    {
        // checking horizontally
        if (board[row][i] == value)
            return false;

        if (board[i][col] == value)
            return false;

        if (board[3 * (row / 3) + (i / 3)][3 * (col / 3) + (i % 3)] == value)
            return false;
    }
    return true;
}
bool solve(vector<vector<char>> &board, int n)
{

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (board[i][j] == '.')
            {
                for (char value = '1'; value <= '9'; value++)
                {
                    if (isSafe(i, j, board, value))
                    {
                        board[i][j] = value;

                        bool isWrong = solve(board, n);
                        if (isWrong)
                            return true;
                        else
                            board[i][j] = '.';
                    }
                }
                return false;
            }
        }
    }
    return true;
}
void solveSudoku(vector<vector<char>> &board)
{
    solve(board, 9);
}
int main()
{
    vector<vector<char>> board = {
        {'5', '3', '.', '.', '7', '.', '.', '.', '.'},
        {'6', '.', '.', '1', '9', '5', '.', '.', '.'},
        {'.', '9', '8', '.', '.', '.', '.', '6', '.'},
        {'8', '.', '.', '.', '6', '.', '.', '.', '3'},
        {'4', '.', '.', '8', '.', '3', '.', '.', '1'},
        {'7', '.', '.', '.', '2', '.', '.', '.', '6'},
        {'.', '6', '.', '.', '.', '.', '2', '8', '.'},
        {'.', '.', '.', '4', '1', '9', '.', '.', '5'},
        {'.', '.', '.', '.', '8', '.', '.', '7', '9'}};

    int n = 9;
    solveSudoku(board);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            cout << board[i][j] << " ";
        cout << endl;
    }
}