----------------------------FUNCTION OVERRIDING ----------------

EX---

//function over 

class A
{
	public void f1(int x)
	{
		System.out.println("Class A");
	}
}
class B extends A
{

	public void f1(int x,int y)
	{
		System.out.println("class B");
	}	
}
public class FunctionOverridingEx {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
    
		B obj=new B();
		obj.f1(5);
		obj.f1(5,6);
		
	}

}


OUTPUT-------------------------------------------------------------------------

Class A
class B