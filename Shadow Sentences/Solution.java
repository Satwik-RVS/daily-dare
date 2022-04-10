import java.util.*;
public class Hello {

    public static void main(String[] args) {
		// RVS
		Scanner input = new Scanner(System.in);
		String S1[] = input.nextLine().split(" ");
		String S2[] = input.nextLine().split(" ");
		if(S1.length != S2.length)
		{
		    System.out.print("NO");
		    return ;
		}
		int N = S1.length;
		String X,Y;
		for(int ind = 0; ind < N; ind++)
		{
		    X = S1[ind];
		    Y = S2[ind];
		    if(X.length() != Y.length())
		    {
		        System.out.print("NO");
			  return ;
		    }
		    for(char ch : X.toCharArray())
		    {
		        if(Y.contains(ch+""))
		        {
		            System.out.print("NO");
		            return ;
		        }
		    }
		}
		System.out.print("YES");
	}
}
