import java.util.Scanner;

public class marathon {

    static boolean marathonCheck(long E[],long D[],int N,int index){
        //drinks energy drink at  check point (current index)
        long energy=E[index];

        //make run from current index to N-1
        for(int i=index;i<N;i++){
            if(energy<=0 || energy<D[i]){
                return false;
            }
            energy=energy-D[i]+E[(i+1)%N];
        }

        //run from 0 index to current index
        for(int i=0;i<=index;i++){
            if(energy<=0 || energy<D[i]){
                return false;
            }
            energy=energy-D[i]+E[(i+1)%N];
        }


        //toros completes marathon run
            return true;
    }



    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int N=sc.nextInt();
        long []E=new long[N];
        long []D=new long[N];
        for(int i=0;i<N;i++){
            E[i]= sc.nextInt();
            D[i]=sc.nextInt();
        }

        boolean check=false;
        int i;
        for(i=1;i<=N;i++){
            if(marathonCheck(E,D,N,i-1)){
                check=true;
                break;
            }
        }
        if (check){
            System.out.println(i);
        }else System.out.println("-1");

    }
}
