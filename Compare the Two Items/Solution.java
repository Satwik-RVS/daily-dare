// RVS
class Item
{
    String name;
    int weight, price;
    Item(String name, int weight, int price)
    {
        this.name = name;
        this.weight = weight;
        this.price = price;
    }
    boolean equals(Item rvs)
    {
        if(this.name.toLowerCase().compareTo(rvs.name.toLowerCase()) == 0)
        {
            if(this.weight == rvs.weight || this.price == rvs.price)
            {
                return true;
            }
        }
        return false;
    }
    @Override
    public String toString()
    {
        return name + " " + Integer.toString(this.weight) + " " + Integer.toString(this.price);
    }
}

public class Main
{
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		Item item1 = new Item(sc.nextLine().trim(),sc.nextInt(),sc.nextInt());
		sc.nextLine();
		Item item2 = new Item(sc.nextLine().trim(),sc.nextInt(),sc.nextInt());
		System.out.println(item1.equals(item2) ? "SAME" : "NOT SAME");
		System.out.println(item1);
		System.out.println(item2);
		
	}
}
