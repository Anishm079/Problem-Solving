import java.util.*;
import java.io.*;
/*
PROBLEM STATEMENT:Given a number N , you need to calculate number of distinct numbers of gcd(i, N) where i is between 1<=i<=1e18.
Note:-You need to check for all the possible values of I.




 */



public class specialNumbers {


    static  int GCD(int N,int M){
        if(N<M){
            GCD(M,N);
        }
        if(M<=0){
            return 0;
        }
        if(N<M){
            GCD(M,N);
        }
        return 1+GCD(M,N-M);
    }

    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int N=sc.nextInt();

        System.out.println(GCD(N,8));
    }
}
