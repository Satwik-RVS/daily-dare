import java.util.Scanner;

class Hello{
    public static void main(String[] args) {
        int N, T;
        int[] inputArray, outputArray, operatorArray;

        Scanner scanner = new Scanner(System.in);
        N = scanner.nextInt();
        inputArray = new int[N];
        outputArray = new int[N];
        operatorArray = new int[N];
        for(int i = 0; i < N; i++) {
            inputArray[i] = scanner.nextInt();
            outputArray[i] = inputArray[i];
            operatorArray[i] = -1;
        }
        T = scanner.nextInt();
        scanner.close();

        for(int i = 0; i < T; i++) {
            int j = i%N;
            outputArray[j] += operatorArray[j];
            operatorArray[j] = outputArray[j] == 0 ? 1 : outputArray[j] == inputArray[j] ? -1 : operatorArray[j];

            for(int k = 0; k < N; k++) {
                System.out.print(outputArray[k]);
            }
            System.out.println(" " + outputArray.toString());
        }
    }
}
