
public class FuncOverload {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		BigNum ob=new BigNum();
		double n;
		n=ob.maximum(7.8,9.0);
		System.out.println(n);
	}

}
class BigNum{
	//public int a,b;
	public int maximum(int x, int y){
		int max;
		if(x<y){
			 max=y;
		}else{
			max=x;
		}
		System.out.println("int max");
		return max;
		
	}
	public double maximum(double x, double y){
		double max;
		if(x>y){
			max=x;
		}else{
			max=y;
		}
		System.out.println("double max");
		return max;
		
	}
}