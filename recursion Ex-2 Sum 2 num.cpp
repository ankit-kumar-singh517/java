-------------------------------recursion function ---------------------------
EX-2 SUM OF THE TWO NUMBER -------------------------------------------------




// function calling itself is called recursion
import java.util.Scanner;


public class RecursionEx2sum {

	public static  void main(String[] args) {
		// TODO Auto-generated method stub

		int sum,x,y;
		Scanner input=new Scanner(System.in);
		
		System.out.println("enter number x = ");
		x=input.nextInt();
		
		System.out.println("enter number second y = ");
		y=input.nextInt();
		
		sum=Add(x,y);
		System.out.println("sum of the both number = "+sum);
	}
	 static int Add(int x,int y)
	  {
		//return Add(x,y);
		if (y==0)
		     return x;
		  else 
		  {
		     return(1+Add(x,y-1));
		  }
	  }
		
		
	}


OUTPUT-------------------------------------------------------------------------------------------------


enter number x = 
10
enter number second y = 
10
sum of the both number = 20
