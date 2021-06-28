======================CLASS AND OBJECT PARAMETER==================


eX----

// it is the third method in the form while creating the classes and object 

class Cuboid
{
  double length;
  double breadth;
  double height;
  
 double volume()                    //returnvalue for the  volume 
 {
	 return length*breadth*height;
 }
 void setDim(double l,double b,double h)    // set dimension for length breadth height
 {
	 length=l;
	 breadth=b;
	 height=h;
 }
 
}
public class ClassAndObjecttakingparameter {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
     Cuboid mycube1=new Cuboid();
     Cuboid mycube2=new Cuboid();
     
     double vol;
      mycube1.setDim(100,10,10);
      System.out.println("volume of the cuboid 1=");
      vol=mycube1.volume();
      System.out.println(+vol);
      mycube2.setDim(10,10,10);
      System.out.println("volume of the cuboid 2=");
      vol=mycube2.volume();
      System.out.println(+vol);
      
      
	}

}



OUTPUT===========================


volume of the cuboid 1=
10000.0
volume of the cuboid 2=
1000.0