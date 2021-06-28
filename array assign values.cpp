========================Array Using Assign Value========================

Ex----


//array form in which user assign the value in the array 

import java.util.*;
public class ArrayUserAssignVAlue {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		
		int num[]=new int[5];
		Scanner input=new Scanner(System.in);
	
			System.out.println("enter the 5 value in the array=");
			for(int i=0;i<5;i++)
			{
				num[i]=input.nextInt();
			}
			for(int n:num)
				System.out.println(n);

	}

}


Output====================================================


enter the 5 value in the array=
1
2
3
4
9
1
2
3
4
9