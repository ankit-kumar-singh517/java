//uses of for loop 
public class UseOfForLoop {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
      for(int i=1;i<=10;++i)
      {
    	  System.out.println("gaandu");
      }
        int num[]= {23,34,45,56,67};
       for(int n:num)
       {
    	   System.out.println(n);
       }
		// sum of 1 to 500 by using for loop
		System.out.println("sum of first 500 number ");
		
		  int sum=0;
		 for( int i=0;i<=500;i++)
		 {
			  sum = sum+i;
			 
		 }
		 System.out.println("Sum = " +sum);
		 
		 //printing an the array 
		 System.out.println("display the aaray by using for the loop ");
		 int number[]= {56,67,98,67,34,01};
		 for(int n:number)
		 {
			 System.out.println(n);
		 }
	}
	

}
