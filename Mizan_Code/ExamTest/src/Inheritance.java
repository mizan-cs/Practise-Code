
public class Inheritance {

	public static void main(String[] args) {
		BigBox ob=new BigBox();
		ob.ShowBox();

	}

}
class Box{
	public int hight;
	public int wight;
	
	public Box(){
		hight=0;
		wight=0;
	}
//	public Box(int hight, int wight){
//		this.hight=hight;
//		this.wight=wight;
//	}
	
	public void PrintArea(){
		System.out.println("Box Area is "+hight*wight);
	}
	
}
class BigBox extends Box{
	public String color;
	
	public BigBox(){
		color="Wite";
	}
//	public BigBox(String color){
//		super(hight,wight);
//		this.color=color;
//	}
	public void ShowBox(){
		System.out.println("Color: "+color);
		System.out.println("Hight: "+hight);
		System.out.println("Wight: "+wight);
	}
	
}
