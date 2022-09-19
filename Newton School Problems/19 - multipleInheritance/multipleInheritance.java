
interface Adder {
    public int add();
    public int add(int a,int b);
    public int add(int a,int b,int c);
}

public class multipleInheritance {

    public static void main(String[] args) {
        AdderII adderII=new AdderII(1,1);

        int a=1,b=3,c=4;
//        System.out.println(adderII.add(a,b,c));
//        System.out.println(adderII.add(adderII.num1,b));
//        System.out.println(adderII.add(adderII.num2,c));
        System.out.println((adderII.add(adderII.num1,b) + adderII.add(adderII.num2,c) - a*a));
        System.out.println(adderII.add(b,c,a));

//        if(adderII.add(a,c) != check(a,c) || adderII.add(b,c) != check(b,c)|| (adderII.add(adderII.num1,b) + adderII.add(adderII.num2,c) - a*a)  != adderII.add(b,c,a) ){
        if( (adderII.add(adderII.num1,b) + adderII.add(adderII.num2,c) - a*a)  != adderII.add(b,c,a))
            System. out. println("Wrong");
        else
            System. out. println("Correct");
    }
}
