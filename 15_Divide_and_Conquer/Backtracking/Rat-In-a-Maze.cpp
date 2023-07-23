#include <bits/stdc++.h>
using namespace std;
bool isSafe(vector<vector<int>> &arr, int i, int j, int row, int col, vector<vector<bool>> &visit)
{
    if (i < 0 || i >= row || j < 0 || j >= col || visit[i][j] == true || arr[i][j] == 0)
        return false;
    return true;
}
int di[4] = {1, 0, 0, -1};
int dj[4] = {0, -1, 1, 0};
char ch[4] = {'D', 'L', 'R', 'U'};
// Love Babber Solution
void getAllPaths(vector<vector<int>> &arr, int row, int col, int i, int j, string str, vector<string> &ans, vector<vector<bool>> &visit)
{
    if (i == row - 1 && j == col - 1)
    {
        ans.push_back(str);
        return;
    }
    /*
    //down
    if (isSafe(arr, i + 1, j, row, col, visit))
    {
        visit[i + 1][j] = true;
        getAllPaths(arr, row, col, i + 1, j, str + 'D', ans, visit);
        visit[i + 1][j] = false;
    }
    // left
    if (isSafe(arr, i, j - 1, row, col, visit))
    {
        visit[i][j - 1] = true;
        getAllPaths(arr, row, col, i, j - 1, str + 'L', ans, visit);
        visit[i][j - 1] = false;
    }
    // right
    if (isSafe(arr, i, j + 1, row, col, visit))
    {
        visit[i][j + 1] = true;
        getAllPaths(arr, row, col, i, j + 1, str + 'R', ans, visit);
        visit[i][j + 1] = false;
    }
    // up
    if (isSafe(arr, i - 1, j, row, col, visit))
    {
        visit[i - 1][j] = true;
        getAllPaths(arr, row, col, i - 1, j, str + 'U', ans, visit);
        visit[i - 1][j] = false;
    }
    */
    // Above code optimised in case of number of line of code
    for (int k = 0; k < 4; k++)
    {
        if (isSafe(arr, di[k] + i, dj[k] + j, row, col, visit))
        {
            visit[di[k] + i][dj[k] + j] = true;
            getAllPaths(arr, row, col, di[k] + i, dj[k] + j, str + ch[k], ans, visit);
            visit[di[k] + i][dj[k] + j] = false;
        }
    }
}
vector<string> findPath(vector<vector<int>> &arr, int row, int col)
{
    vector<string> ans;
    vector<vector<bool>> visit(row, vector<bool>(col, false));
    getAllPaths(arr, row, col, 0, 0, "", ans, visit);
    return ans;
}

// Own Solution
/*vector<string> ans;
void getPaths(vector<vector<int>> &m, vector<vector<bool>> &mark, int i, int j, int n, string &str)
{
    // Base Condition
    if (i < 0 || j < 0 || i >= n || j >= n || m[i][j] != 1 || mark[i][j])
    {
        return;
    }
    mark[i][j] = true;

    if (i == n - 1 && j == n - 1)
    {
        ans.push_back(str);
        mark[i][j] = false;
        return;
    }

    // Down
    str.push_back('D');
    getPaths(m, mark, i + 1, j, n, str);
    str.pop_back();

    // left
    str.push_back('L');
    getPaths(m, mark, i, j - 1, n, str);
    str.pop_back();

    // right
    str.push_back('R');
    getPaths(m, mark, i, j + 1, n, str);
    str.pop_back();

    // up
    str.push_back('U');
    getPaths(m, mark, i - 1, j, n, str);
    str.pop_back();

    mark[i][j] = false;
}
vector<string> findPath(vector<vector<int>> &m, int n)
{
    // Your code goes here
    vector<vector<bool>> mark(n, vector<bool>(n, false));
    mark[0][0] = false;
    string str;
    getPaths(m, mark, 0, 0, n, str);
    return ans;
}
*/
int main()
{
    vector<vector<int>> arr = {{1, 0},
                               {1, 0}};

    int row = 2;
    int col = 2;
    vector<string> ans = findPath(arr, row, col);

    if (ans.size() == 0)
        cout << "No Path exists";

    for (auto ele : ans)
        cout << ele << " ";
}