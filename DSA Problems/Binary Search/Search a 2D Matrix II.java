/*
 * Input: matrix =
 * [[1,4,7,11,15],[2,5,8,12,19],[3,6,9,16,22],[10,13,14,17,24],[18,21,23,26,30]]
 * , target = 5
 * Output: true
 */

class Solution {
    public boolean searchMatrix(int[][] matrix, int target) {
        int row = matrix.length;
        int column = matrix[0].length;

        int rowIndex = 0;
        int columnIndex = column - 1;

        while (rowIndex < row && columnIndex >= 0) {
            int element = matrix[rowIndex][columnIndex];

            if (element == target) {
                return true;
            } else if (element > target) {
                columnIndex--;
            } else {
                rowIndex++;
            }
        }

        return false;
    }
}