import java.util.Scanner;


public class Paragons {
	static Scanner get=new Scanner(System.in);
	public static void main(String[] args) {
		String str;
		str=get.nextLine();
		str=str.trim().toLowerCase();
		
		char[] ch=str.toCharArray();
		int[] a =new int[26];
		
		for(int i=0; i<str.length(); i++){
			if(ch[i]>=97 && ch[i]<=122){
				a[ch[i]-97]++;
			}
		}
		int count=0;
		for(int i=0;i<ch.length; i++){
			if(ch[i]>0){
				count++;
			}
		}
		
		if(count==26){
			System.out.println("pangram");
		}else{
			System.out.println("not pangram");
		}

	}

}
