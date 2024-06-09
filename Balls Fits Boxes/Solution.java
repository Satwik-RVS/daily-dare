import java.util.Arrays;
import java.util.Scanner;

class Hello{
    public static void main(String[] args) {
        int N;
        int[] boxArray, ballArray;

        Scanner scanner = new Scanner(System.in);
        N = scanner.nextInt();
        boxArray = new int[N];
        ballArray = new int[N];
        for(int i = 0; i < N; i++) {
            boxArray[i] = scanner.nextInt();
        }
		for(int i = 0; i < N; i++) {
            ballArray[i] = scanner.nextInt();
        }
        scanner.close();
        
		Arrays.sort(boxArray);
		Arrays.sort(ballArray);
		boolean flag = true;
        for(int i = 0; i < N; i++) {
            if(boxArray[i] <= ballArray[i]) {
				flag = false;
				break;
			}
        }
		System.out.println(flag ? "YES" : "NO");
    }
}
