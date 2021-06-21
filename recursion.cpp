

............. factorial by using recursion function .........................................................



 //to find the factorial  of a program by using the recursion function.

class Factorial
{
	int fact(int n)
	{
		int result;
		
		if(n==1) return 1;
		result=fact(n-1)*n;
		return result;
	}
}
public class RecursionFactorial {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
    
		Factorial f = new Factorial();

		//Object fact;
		//fact.f(3);
		
		
	System.out.println("factorial is = "+f.fact(3));
	System.out.println("factorial is = "+f.fact(4));
	System.out.println("factorial is = "+f.fact(7));
	System.out.println("factorial is = "+f.fact(8));
	}

}
