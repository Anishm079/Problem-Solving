import java.util.*;
import java.io.*;

public class modifiedBoolMatrix {

    static void printModifiedMatrix(boolean arr[][],int m,int n){

        for(int i=0;i<m;i++){
            boolean check=false;
            for(int j=0;j<n;j++){
                if(arr[i][j]==true){
                    check=true;
                    break;
                }
            }
            if(check){
                for(int j=0;j<n;j++)
                    System.out.print("1 ");
            }else{
                for(int j=0;j<n;j++)
                    System.out.print("0 ");
            }
            System.out.println();
        }
    }


    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);

        int T=sc.nextInt();
        while(T>0){
            int m=sc.nextInt();
            int n=sc.nextInt();
            boolean arr[][]=new boolean[m][n];

            for(int i=0;i<m;i++){
                for(int j=0;j<n;j++){
                    int Num= sc.nextInt();
                    arr[i][j]=(Num==1?true:false);
                }
            }
            printModifiedMatrix(arr,m,n);
            T--;
        }
    }



}
