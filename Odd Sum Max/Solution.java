import java.util.*;
public class Hello {

    public static void main(String[] args) {
		// RVS
		Scanner input = new Scanner(System.in);
		int n = input.nextInt();
		int arr[] = new int[n], sumi = 0;
		for(int i=0;i<n;i++)
		{
		    arr[i] = input.nextInt();
		    sumi += arr[i];
		}
		int OddSumi = -1, x , y;
		if(sumi%2 == 1)
		{
		    System.out.println(sumi);
		    return ;
		}
		for(int i=0;i<n;i++)
		{
		    x = arr[i];
		    y = sumi-x;
		    if(y%2 == 1 && y > OddSumi)
		    {
		        OddSumi = y;
		    }
		}
		System.out.println(OddSumi);
	}
}
