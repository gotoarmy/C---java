package static_overide;

public class Cob extends Human {
	
	private String workingplace;
	public Cob(String name, String number,String work) {
		super(name, number); //상위 클래스 생성자 오버로딩
		workingplace = work;
		// TODO Auto-generated constructor stub
	}
    @SuppressWarnings("static-access")
	public void arrestbitchingguy(citizen people)
    {
    	
    	if (0 < super.zingzing)
    	{
    		System.out.print("아 또 징징대네 주민등록증좀 봅시다.\n경찰서로 갑시다");
    		//people의 맴버변수를 가져와서 증가시키고 싶다.
    		//citizen arrested 함수를 호출해서 바꾼다.
    		people.arrested();
    	}
    }
    
    
	
    
}
