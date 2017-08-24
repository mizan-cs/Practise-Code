
public class PrimeNumber {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		int i,j;
		System.out.println("Serise of Prime Number up To 25:");
		
		for(i=2;i<=25;i++){
			for(j=2;j<=i;j++){
				if(i%j==0){
					break;
				}
			}
			if(i==j){
				System.out.println(" "+i+" ");
			}
		}

	}

}
