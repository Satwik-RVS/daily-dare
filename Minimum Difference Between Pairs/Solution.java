import java.util.*;
public class Hello {

    public static void main(String[] args) {
		// RVS
		Scanner input = new Scanner(System.in);
		int n = input.nextInt();
		int arr[][] = new int[2][n];
		for(int i=0;i<2;i++)
		{
		    for(int j=0;j<n;j++)
		    {
		        arr[i][j] = input.nextInt();
		    }
		}
		for(int i=0;i<2;i++)
		{
		    for(int j=0;j<n;j++)
		    {
		        for(int k=j+1;k<n;k++)
		        {
		            if(arr[i][j] > arr[i][k])
		            {
		                int temp = arr[i][j];
		                arr[i][j] = arr[i][k];
		                arr[i][k] = temp;
		            }
		        }
		    }
		}
		
		int minDiff = 0, x;
		for(int i=0;i<n;i++)
		{
		    x = arr[0][i] - arr[1][i];
		    if(x < 0)
		    {
		        x *= -1;
		    }
		    minDiff += x;
		}
		System.out.println(minDiff);
	}
}
