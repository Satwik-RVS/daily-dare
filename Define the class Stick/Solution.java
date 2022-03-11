import java.util.*;

class Stick
{
    public int len = 0;
    Stick(int len)
    {
        this.len = len;
    }
    public void combineStick(Stick temp)
    {
        if(temp.len == 0)
        {
            System.out.println("Length of the stick cannot be zero");
        }
        this.len += temp.len;
    }
    public void breakStick()
    {
        if(this.len%2 == 0)
        {
            this.len /= 2;
        }
        else
        {
            System.out.println("Length of the stick cannot be odd");
        }
    }
    public int getLength()
    {
        return this.len;
    }
}

public class Main
{
	public static void main(String[] args)
	{
        Scanner sc = new Scanner(System.in);
        int stickLen = Integer.parseInt(sc.nextLine());
        Stick stick = new Stick(stickLen) ;
        int Q = Integer.parseInt(sc.nextLine());
        for (int ctr = 1; ctr <= Q; ctr++)
        {
            String query[] = sc.nextLine().trim().split("\\s+");
            int queryType = Integer.parseInt(query[0]);
            if(queryType == 1)
            {
                stick.combineStick(new Stick(Integer.parseInt(query[1])));
            }
            else if(queryType == 2)
            {
                stick.breakStick();
            }
            System.out.println(stick.getLength());
        }
	}
}
