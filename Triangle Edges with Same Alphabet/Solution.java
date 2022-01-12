import java.util.*;
public class Hello {

    public static void main(String[] args) {
		// RVS
		Scanner input = new Scanner(System.in);
		int n = input.nextInt();
		int m = n-1, c = -1;
		for(int i=0;i<m;i++)
		{
		    for(int j=0;j<m-i;j++)
		    {
		        System.out.print("*");
		    }
		    if(i != 0)
		    {
		        System.out.print("c");
		        c += 2;
		    }
		    for(int j=0;j<c;j++)
		    {
		        System.out.print("*");
		    }
		    System.out.println("a");
		}
		System.out.print("c ");
		for(int i=0;i<m;i++)
		{
		    System.out.print("b ");
		}
	}
}
