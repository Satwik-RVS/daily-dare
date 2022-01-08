import java.util.*;
public class Hello {

    public static void main(String[] args) {
		// RVS
		Scanner input = new Scanner(System.in);
		int n = input.nextInt(), m = input.nextInt();
		int matrix[][] = new int[n][m];
		for(int i=0;i<n;i++)
		{
		    for(int j=0;j<m;j++)
		    {
		        matrix[i][j] = input.nextInt();
		    }
		}
		int flag = 0;
		for(int k=0;k<m;k++)
		{
		    int leftSum = 0, rightSum = 0;
		    for(int i=0;i<n;i++)
		    {
		        for(int j=0;j<m;j++)
		        {
		            if(j<k)
		            {
		                leftSum += matrix[i][j];
		            }
		            else
		            {
		                rightSum += matrix[i][j];
		            }
		        }
		    }
		    if(leftSum == rightSum)
		    {
		        flag = 1;
		        break;
		    }
		}
		if(flag == 1)
		{
		    System.out.println("YES");
		}
		else
		{
		    System.out.println("NO");
		}
	}
}
