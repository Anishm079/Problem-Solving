import java.util.Scanner;

public class findElementIn2DMatrix {

    static void indexOfElement(int arr[][],int X){
        int i=0,j=arr.length-1;
        while(i<arr.length && j>=0){
            if(arr[i][j]==X){
                System.out.println("Index :"+i+" "+j);
                return;
            }
            if(arr[i][j]>X){
                j--;
            }else{
                i++;
            }
        }
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int N=sc.nextInt();

        int arr[][]=new int[N][N];

        for(int i=0;i<N;i++){
            for(int j=0;j<N;j++){
                arr[i][j]= sc.nextInt();
            }
        }
        int X=sc.nextInt();
        indexOfElement(arr,X);
    }
}
