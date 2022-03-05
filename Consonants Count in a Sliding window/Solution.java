import java.util.*;
public class Hello
{
    static int isConsonant(char ch)
    {
        ch = Character.toLowerCase(ch);
        if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
        {
            return 0;
        }
        else
        {
            return 1;
        }
    }
	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);
		int K = input.nextInt();
		String str = input.next();
		int len = str.length(), count = 0;
		char S[] = str.toCharArray();
		for(int i=0; i<K; i++)
		{
		    if(isConsonant(S[i]) == 1)
		    {
		        count += 1;
		    }
		}
		System.out.print(count+" ");
		for(int i=1; i<len-K+1; i++)
		{
		    if(isConsonant(S[i-1]) == 1)
		    {
		        count -= 1;
		    }
		    if(isConsonant(S[i+K-1]) == 1)
		    {
		        count += 1;
		    }
		    System.out.print(count+" ");
		}
	}
}
