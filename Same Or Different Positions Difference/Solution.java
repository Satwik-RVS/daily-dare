import java.util.*;
public class Hello {

    public static void main(String[] args) {
		// RVS
		Scanner input = new Scanner(System.in);
		int n = input.nextInt();
		int arr[] = new int[n], sortArr[] = new int[n];
		for(int i=0,j=0;i<n;i++)
		{
		    arr[i]= input.nextInt();
		    sortArr[i] = arr[i];
		}
		int X = 0, Y = 0, temp;
		for(int i=0;i<n;i++)
		{
		    for(int j=i+1;j<n;j++)
		    {
		        if(sortArr[i] > sortArr[j])
		        {
		            temp = sortArr[i];
		            sortArr[i] = sortArr[j];
		            sortArr[j] = temp;
		        }
		    }
		    if(arr[i] == sortArr[i])
		    {
		        X += arr[i];
		    }
		    else
		    {
		        Y += sortArr[i];
		    }
		}
		if(Y > X)
		{
		    temp = X;
		    X = Y;
		    Y = temp;
		}
		System.out.println(X-Y);
		
	}
}
