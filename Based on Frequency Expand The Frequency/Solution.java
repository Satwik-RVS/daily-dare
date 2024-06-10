import java.util.Scanner;

class Hello{
    public static void main(String[] args) {
        String str;
        char c;
        int array[], n, m;

		Scanner scanner = new Scanner(System.in);
		str = scanner.nextLine();
        array = new int[26];
        scanner.close();

        for(int i = 0; i < str.length(); i+=2) {
            c = str.charAt(i);
            n = str.charAt(i+1)-48;
            m = n-array[c-'a'];

            // Java 11+
            System.out.print(String.valueOf(c).repeat(m));
            array[c-'a'] += m;

            // Alternative
            // for(int j = 0; j < m; j++) {
            //     System.out.print(c);
            // }
            // System.err.println();
        }
        System.out.println();
    }
}
