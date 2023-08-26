#include <vector>
#include <set>

using namespace std;


class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        int numsRow = 0;
        int numsCol = 0;
        int numsSqa = 0;
        vector<set<char>> rowSet(9,set<char>());
        vector<set<char>> colSet(9,set<char>());
        vector<set<char>> sqaSet(9,set<char>());
        for(int i = 0 ; i < 9; i++)
        {
            for(int j = 0; j < 9 ; j++)
            {
                if(board[i][j] != '.')
                {
                    rowSet[i].insert(board[i][j]);
                    numsRow++;
                }
                if(board[j][i] != '.')
                {
                    colSet[i].insert(board[j][i]);
                    numsCol++;
                }
            }
            if(rowSet[i].size() != numsRow)
                return false;
            if(colSet[i].size() != numsCol)
                return false;
            numsRow = 0;
            numsCol = 0;
        }

        for(int i = 0 ; i < 9 ; i++)
        {
            for(int j = 0 ; j < 9 ; j++)
            {
                int row = (i/3)*3 + j/3;
                int col = (i%3)*3 + j%3;
                if(board[row][col] != '.')
                {
                    sqaSet[i].insert(board[row][col]);
                    numsSqa++;
                }
            }
            if(sqaSet[i].size() != numsSqa)
                return false;
            numsSqa = 0;
        }

        return true;
    }
};
