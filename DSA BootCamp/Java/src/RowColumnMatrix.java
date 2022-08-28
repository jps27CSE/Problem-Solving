import java.util.Arrays;

public class RowColumnMatrix {
    public static void main(String[] args) {
        int[][] array = {
                { 10, 20, 30, 40 },
                { 15, 25, 35, 45 },
                { 28, 29, 37, 49 },
                { 33, 34, 38, 50 }
        };

        System.out.println(Arrays.toString(search(array, 49)));
    }

    static int[] search(int[][] array, int target) {
        int row = 0;
        int column = array[0].length - 1;

        while (row < array.length && column >= 0) {
            if (array[row][column] == target) {
                return new int[] { row, column };
            } else if (array[row][column] < target) {
                row++;
            } else {
                column--;
            }
        }
        return new int[] { -1, -1 };
    }

}
