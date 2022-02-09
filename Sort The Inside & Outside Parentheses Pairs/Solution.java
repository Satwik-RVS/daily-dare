import java.util.*;
public class Hello {

    public static void main(String[] args) {
		// RVS
		Scanner input = new Scanner(System.in);
		int n = input.nextInt();
		int insideArr[] = new int[n], outsideArr[] = new int[n], specifier[] = new int[n];
		for(int i=0; i<n; i++)
		{
		    String str = input.next();
		    char[] strArr = str.toCharArray();
		    int x = 0, y = 0, flag = 1;
		    for(char ch : strArr)
		    {
		        if(ch == '(')
		        {
		            flag = 0;
		            continue;
		        }
		        if(ch == ')')
		        {
		            flag = 1;
		            continue;
		        }
		        if(flag == 1)
		        {
		            x = x*10 + ch-'0';
		        }
		        else
		        {
		            y = y*10 + ch-'0';
		        }
		    }
		    outsideArr[i] = x;
		    insideArr[i] = y;
		    if(strArr[0] == '(')
		    {
		        specifier[i] = 1;
		    }
		}
		int temp;
		for(int i=0; i<n; i++)
		{
		    for(int j=i+1; j<n; j++)
		    {
		        if(outsideArr[i] < outsideArr[j])
		        {
		            temp = outsideArr[i];
		            outsideArr[i] = outsideArr[j];
		            outsideArr[j] = temp;
		        }
		    }
		}
		for(int i=0; i<n; i++)
		{
		    for(int j=i+1; j<n; j++)
		    {
		        if(insideArr[i] > insideArr[j])
		        {
		            temp = insideArr[i];
		            insideArr[i] = insideArr[j];
		            insideArr[j] = temp;
		        }
		    }
		}
		for(int i=0; i<n; i++)
		{
		    if(specifier[i] == 1)
		    {
		        System.out.print("("+insideArr[i]+")"+outsideArr[i]+" ");
		    }
		    else
		    {
		        System.out.print(outsideArr[i]+"("+insideArr[i]+")"+" ");
		    }
		}
	}
}
