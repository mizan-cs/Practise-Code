
public class ClassAndClass {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Students ob=new Students();
		ob.name="mizan";
		ob.roll=123456;
		ob.Show();
		

	}

}
class Students{
	public String name;
	public int roll;
	
	public void Show(){
		System.out.println("Stuent Name is "+name);
	}
}
