-------------------------------label for loop -----------------

EX-

 //label by using for for loop and nested forloop 
public class LabelForLoop {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
        out:
		for( int i=0;i<=10;i++)
		{  
			System.out.println("i=" +i);
			in:
			for(int j=0;j<=10;j++)
			{    
				if(i==8)
				break out;
				System.out.println("j="+j);
		    }
			 
		}
		 
	}

}


output-------------------------------------------------------


i=0
j=0
j=1
j=2
j=3
j=4
j=5
j=6
j=7
j=8
j=9
j=10
i=1
j=0
j=1
j=2
j=3
j=4
j=5
j=6
j=7
j=8
j=9
j=10
i=2
j=0
j=1
j=2
j=3
j=4
j=5
j=6
j=7
j=8
j=9
j=10
i=3
j=0
j=1
j=2
j=3
j=4
j=5
j=6
j=7
j=8
j=9
j=10
i=4
j=0
j=1
j=2
j=3
j=4
j=5
j=6
j=7
j=8
j=9
j=10
i=5
j=0
j=1
j=2
j=3
j=4
j=5
j=6
j=7
j=8
j=9
j=10
i=6
j=0
j=1
j=2
j=3
j=4
j=5
j=6
j=7
j=8
j=9
j=10
i=7
j=0
j=1
j=2
j=3
j=4
j=5
j=6
j=7
j=8
j=9
j=10
i=8
