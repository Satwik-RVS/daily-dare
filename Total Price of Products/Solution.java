import java.util.Scanner;

class Hello{
    public static void main(String[] args) {
        String str;
		int arr[], totalAmoount;

		Scanner scanner = new Scanner(System.in);
		str= scanner.nextLine();
		arr = new int[4];
		totalAmoount = 0;
		for(int i =0; i < str.length(); i++) {
			arr[str.charAt(i) -'A'] += 1;
		}
		scanner.close();

		// A - Rs.40 each or Rs.100 for a pack of 4
		// B - Rs.60 each
		// C - Rs.55 each or Rs.200 for a pack of 6
		// D - Rs.95 each
		totalAmoount += (((arr[0]/4) * 100) + ((arr[0]%4)*40)) + arr[1]*60 + (((arr[2]/6) * 200) + ((arr[2]%4)*55)) + arr[3]*95;
		
		System.out.println(totalAmoount);
    }
}
