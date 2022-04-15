package static_overide;

public class citizen extends Human {

	private int Jailcount = 0;
	private int citizennum = 0;
	
	public citizen(String s_name,String s_num,int num) 
	{
		super(s_name,s_num); //상위클래스 생성자 역참조
		citizennum = num;
	}
	 public void arrested()
	    {
	    	this.Jailcount++;
	    }
	
	
}
