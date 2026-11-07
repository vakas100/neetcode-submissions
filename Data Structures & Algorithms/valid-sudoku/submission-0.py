class Solution:
    def isValidSudoku(self, board: List[List[str]]) -> bool:
        for i in range(len(board[0])):
            seen = set()
            for j in range(len(board[0])):
                val = board[i][j]
                if val == '.':
                    continue
                if val in seen:
                    return False
                seen.add(val)
        
        for j in range(len(board[0])):
            seen = set()
            for i in range(len(board)):
                val = board[i][j]
                if val == '.':
                    continue
                if val in seen:
                    return False
                seen.add(val)
        
        for box_row in range(0,9,3):
            for box_col in range(0,9,3):
                seen = set()
                for i in range(3):
                    for j in range(3):
                        val = board[box_row + i][box_col + j]
                        if val == '.':
                            continue
                        if val in seen:
                            return False
                        seen.add(val)

        return True