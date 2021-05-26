 conditioal statemnet
which number is grater 

import java.util.*;
public class IfElsecondotion {

	public static void main(String[] args) {
		// TODO Auto-generated method stub

		int num1=0, num2=0, num3=0;
		Scanner input =new Scanner(System.in);
		System.out.println("enter number 1=");
		num1=input.nextInt();
		System.out.println("enter number 2=");
		num2=input.nextInt();
        System.out.println("enter number 3");
        num2=input.nextInt();
         if
         (num1>num2 && num1>num3)
         {
        	 System.out.println("number 1 is greater than number 2 and number 3");
         }
         else if
         (num2>num1 && num2>num3)
         {
        	 System.out.println("number 2 is greater than number 1 and num 3");
         }
         else
         {
        	 System.out.println("number 3 is greater than number 2 and numbere 3");
        	 
         }
		
	}




output-----------------------------------------------------------------------------------------

enter number 1=
56
enter number 2=
78
enter number 3
71
number 2 is greater than number 1 and num 3
