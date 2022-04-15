package static_overide;

public class Main {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
          Human bruce = new Human("강동훈","010-4764-5564");
          bruce.Greeting();
          citizen lonelyguy =new citizen("팔xx고시원장","010-2591-3401",10);
          lonelyguy.Greeting();
          lonelyguy.weeping();
          lonelyguy.weeping();
          lonelyguy.weeping();
          Cob cob= new Cob("장보고","010","수성구");
          cob.arrestbitchingguy(lonelyguy);
          // -사람을 상속받은 시민을 형성
          // -인사
          // -시민들은 징징거림(weeping)을 받아주지않음 weepping 할때마다 class static int zingzing이 증가
          // -경찰이 등장 징징거리는 사람을 잡아감,그 결과 시민들이 jail에감.
	}

}
