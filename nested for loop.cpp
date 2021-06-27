-------------------------------nested for loop -----------------

EX-

//nested for loop loop inside loop

public class NestedForLoop {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
  
		for(int i=0;i<=10;i++)
		{
			System.out.println("i=" +i);
			for(int j=0;j<=10;j++)
			{
				if(j==8)
					continue;
				System.out.println( "j="+j);			}
		}
		
	}

}


output-------------------------------------------------------


j=3
j=4
j=5
j=6
j=7
j=9
j=10