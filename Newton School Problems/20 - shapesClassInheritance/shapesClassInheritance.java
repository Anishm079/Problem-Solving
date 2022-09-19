import java.util.*;

// Do not edit the Quadrilateral class
abstract class Quadrilateral {
    double side1;
    double side2;
    double side3;
    double side4;

    public Quadrilateral(double side1, double side2, double side3, double side4) {
        this.side1 = side1;
        this.side2 = side2;
        this.side3 = side3;
        this.side4 = side4;
    }

    protected abstract double getArea();

    protected double getPerimeter() {
        return (side1+side2+side3+side4);
    }
}

// Implement class Parallelogram and methods getArea() and getPerimeter()
class Parallelogram extends Quadrilateral {
    //Write your code here
    //P=2(a+b)
    //A=b*h
//    private double height;
//    private double a;
//    private double b;
//
    Parallelogram(double A,double B, double hgt){
        super(A,B,hgt,0.0);
    }
    @Override
    public double getArea(){
    return (side1*side3);
    }
    @Override
    public double getPerimeter(){
        return 2*(side1+side2);
    }

}
//
//// Implement class Rhombus and methods getArea() and getPerimeter()
class Rhombus extends Parallelogram {
    //Write your code here
    //P=4a
    //q=2Ap
    //A=pq p=diagonal

    Rhombus(double Side,double Height){
        super(Side,Height,Side);
    }
    @Override
    public double getArea(){
        return (side1*side2);
    }
    @Override
    public double getPerimeter(){
        return 4*side1;
    }

}
//
////Implement class Rectangle and methods getArea() and getPerimeter()
class Rectangle extends Parallelogram {
    //Write your code here
    //P=2(l+w)
    //A=wl

    public Rectangle(double length,double height){
        super(length,height,0.0);

    }
    @Override
    public double getArea(){
        return side1*side2;
    }
    @Override
    public double getPerimeter(){
        return 2*(side1+side2);
    }

}
////Implement class Square and methods getArea() and getPerimeter()
class Square extends Rhombus {
    //Write your code here
    //P=4a
    //A=a2

    Square(double side){
        super(side,0.0);
    }
    @Override
    public double getArea(){
        return side1*side1;
    }
    @Override
    public double getPerimeter(){
        return 4*side1;
    }


}



// Do not edit the Main class
//class Main {
//    public static void main(String[] args) {
//        //Write your code here
//        Scanner scan=new Scanner(System.in);
//        int side1=scan.next
//
//        scan.close();
//    }
//}


//my
public class shapesClassInheritance {

    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        //parallellogram
        double sideP1=sc.nextDouble();
        double sideP2=sc.nextDouble();
        double heightP=sc.nextDouble();

        //rhombus
        double sideR= sc.nextDouble();
        double heightR=sc.nextDouble();

        //rectangle
        double lengthRect=sc.nextDouble();
        double heightRect=sc.nextDouble();

        //square
        double sideS= sc.nextDouble();


        //Parallelogram class objects
//        Parallelogram parallelogram=new Parallelogram(sideP1,sideP2,heightP);



        //checking whether any side or height is negative
//        boolean check=true;
        if(sideP1<0 || sideP2<0 || heightP<0 || sideR<0 || heightR<0 || lengthRect<0  || heightRect<0  || sideS<0){
            System.out.println("Length of a side cannot be negative. Please Enter a positive integer");
//            check=false;
        }else {

            //Parallelogram class objects
            Parallelogram parallelogram=new Parallelogram(sideP1,sideP2,heightP);

            //Rhombus class object
            Rhombus rhombus=new Rhombus(sideR,heightR);

            //Rectangle class object
            Rectangle rectangle=new Rectangle(lengthRect,heightRect);

            //Square class object
            Square square=new Square(sideS);


            System.out.println("Perimeter of Parallelogram is " + parallelogram.getPerimeter() +" and Area of Parallelogram is " + parallelogram.getArea());
            System.out.println("Perimeter of Rhombus is " + rhombus.getPerimeter() +" and Area of Rhombus is " + rhombus.getArea());
            System.out.println("Perimeter of Rectangle is " + rectangle.getPerimeter() +" and Area of Rectangle is " + rectangle.getArea());
            System.out.println("Perimeter of Square is " + square.getPerimeter()+ " and Area of Square is " + square.getArea());


        }


        //
    }
}
