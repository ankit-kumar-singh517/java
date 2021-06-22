................ function overloading..........................



// two or more function are same name but different parameters such function are called 
//function overloading 

class A
{
	public void f1(int x)
	{
		System.out.println("class A");
	}
}
class B extends A
{
	public void f1(int x,int y)
	{
	System.out.println("class B");	
	}
}
public class FunctionOverloadingEx {

	public static void main(String[] args) {
		// TODO Auto-generated method stub

		B obj=new B();
		obj.f1(5);
		obj.f1(5,6);
	}

}
