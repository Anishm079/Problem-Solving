import java.util.Scanner;

public class boudaryTraversal{
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int N=sc.nextInt();
        int M=sc.nextInt();
        int arr[][]=new int[N][M];
        for(int i=0;i<N;i++){
            for(int j=0;j<M;j++){
                arr[i][j]=sc.nextInt();
            }
        }

        for(int i=0;i<N;i++){
            for(int j=0;j<M;j++){
                if(j==0 ||i==0 ||i==N-1 || j==M-1)
                    System.out.print(arr[i][j]+" ");
            }System.out.println();
        }
    }
}