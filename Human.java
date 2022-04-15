package static_overide;

public class Human {
	protected String s_name;
    protected String s_number;

    static int zingzing = 0;
    public Human(String name,String number)
    {
    	this.s_name = name;
    	this.s_number = number;
    }
    public void Greeting()
    {
    	System.out.print("¹Ý°©½À´Ï´Ù.\n"+this.s_name+"ÀÔ´Ï´Ù."+"\n" );
    	System.out.print("Á¦ ¹øÈ£´Â:"+this.s_number+"ÀÔ´Ï´Ù.");
    }
    public void weeping()
    {
    	System.out.print("\nÂ¡Â¡Â¡Â¡ ³»¸»Á»µé¾îÁà Â¡Â¡Â¡Â¡");
    	zingzing++;
    }
  
}

