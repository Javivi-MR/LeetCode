class Solution(object):
    def isValidSudoku(self, board):
        rowSet = [set() for _ in range(9)]
        colSet = [set() for _ in range(9)]
        sqaSet = [set() for _ in range(9)]
        
        for i in range(9):
            for j in range(9):
                num = board[i][j]
                if num != '.':
                    if num in rowSet[i] or num in colSet[j] or num in sqaSet[i//3*3+j//3]:
                        return False
                    rowSet[i].add(num)
                    colSet[j].add(num)
                    sqaSet[i//3*3+j//3].add(num)

        return True