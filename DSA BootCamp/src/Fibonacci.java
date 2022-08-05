import java.util.Scanner;

public class Fibonacci {

    public static void main(String[] args) {

        Scanner input = new Scanner(System.in);

        int number = input.nextInt();
        int p = 0, i = 1;

        int count = 2;

        while (count <= number) {
            int temp = i;
            i = i + p;
            p = temp;

            count++;
        }

        System.out.println(i);

        input.close();

    }

}
