/*Input: matrix = [[1,3,5,7],[10,11,16,20],[23,30,34,60]], target = 3
Output: true
*/

class Solution {
    public boolean searchMatrix(int[][] matrix, int target) {
        int row = matrix.length;
        int column = matrix[0].length;

        int start = 0;
        int end = row * column - 1;

        int mid = start + (end - start) / 2;

        while (start <= end) {
            int element = matrix[mid / column][mid % column];

            if (element == target) {
                return true;
            } else if (element > target) {
                end = mid - 1;
            } else {
                start = mid + 1;
            }
            mid = start + (end - start) / 2;
        }

        return false;
    }
}