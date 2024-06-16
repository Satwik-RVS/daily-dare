import java.util.Scanner;

public class Hello {
    public static void main(String[] args) {
        int N, K, result;

        Scanner scanner = new Scanner(System.in);
        N = scanner.nextInt();
        K = scanner.nextInt();
        scanner.close();

        int quot = (int) Math.ceil(K/(N*1.00)), rem = K%N;
        if(quot%2 == 1){
            result = K;
        } else {
            result = (N*quot) - (rem-1);
        }

        System.out.println(result);
    }
}
