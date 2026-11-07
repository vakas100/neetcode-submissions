class Solution:
    def searchMatrix(self, matrix: List[List[int]], target: int) -> bool:
        row, col = len(matrix), len(matrix[0])-1
        for i in range(row):
            if matrix[i][col] == target:
                return True
            elif matrix[i][col]>target:
                for j in range(col):
                    if matrix[i][j] == target:
                        return True
        return False