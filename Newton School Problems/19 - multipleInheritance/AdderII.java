
class AdderII implements Adder
{
    int num1=0;
    int num2=0;

    AdderII(){
        this.num1=0;
        this.num2=0;
    }
    AdderII(int a,int b){
        this.num1=a;
        this.num2=b;
    }

    // @Override
    public  int add(){
        return (this.num1+this.num2);
    }

    // @Override
    public  int add(int a,int b){
        return (a*a+b*b);
    }

    // @Override
    public  int add(int b,int c,int a){
//        int ans=this.num1*b+this.num2*a-c;

        int ans=num1*num1+b*b+num2*num2+c*c-a*a;
        return (ans);
    }


}

