//constructor overloading 


 class Redbox            //make a class of the redbox
 {
	 double length;
	 double height;
	 double breadth; 
 
 Redbox(double l,double b,double h)   // construction is used when dimension is not fixed 
 {
	length=l;
	height=h;
	breadth=b;
 }
 Redbox()              //construction is used when all the dimension is fixed
 {
	 length=-1;
	 breadth=-1;
	 height=-1;
 }
Redbox(double len)       //construction is used when cube is created. 
{
	length=breadth=height=len;
}
double volume()
{
return length*breadth*height;	
}
}
......................overloading construction.....................................................
EX------------------------


public class OverloadingConstructorEx {

	public static void main(String[] args) {
		// TODO Auto-generated method stub

		Redbox mybox1=new Redbox(10,10,10);
		Redbox mybox2=new Redbox();
		Redbox cube=new Redbox(5);
		
		double vol;
		 // volume of the first Redbox
		vol=mybox1.volume();
		System.out.println("volume of the Redbox 1 = "+vol);
		
		//volume of the second Redbox 
		vol =mybox2.volume();
		System.out.println("volume of the second REd box = "+vol);
		
		//volume of the third cube 
		vol=cube.volume();
		System.out.println("volume of the cube = "+vol);
		
		
		
		
	} 

}
