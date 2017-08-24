import java.util.Scanner;


public abstract class Tree {
	static Scanner get=new Scanner(System.in);
	public static void main(String[] args) {
		String str=get.nextLine();
        str = str.trim().toLowerCase();
        int[] a = new int[28];
        char[] ch = str.toCharArray();
        //97-122
       // System.out.println(ch);
        for (int i = 0; i < str.length(); i++) {
          if(ch[i]>=97 && ch[i]<=122){
              a[ch[i]-97]++;
          }
          
        }
        int count=0;
        
        for (int i = 0; i < a.length; i++) {
        	System.out.println(a[i]);
            if(a[i]>0)
                count++;
        }
        if(count==26)
            System.out.println("pangram");
        else
            System.out.println("not pangram");
    }

}
