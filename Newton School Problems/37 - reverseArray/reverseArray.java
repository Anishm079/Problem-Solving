// import java.util.Scanner;
import java.util.*;
public class reverseArray{

    static void swap(int arr[],int low,int high){
        int temp=arr[low];
        arr[low]=arr[high];
        arr[high]=temp;
    }

    static void reverseArr(int arr[],int N){
        int low=0;int high=N-1;

        while(low<high){
            swap(arr, low, high);
            low++;high--;
        }

    }

    static void moveXToTheRight(int arr[],int N,int x){
        int low=0,high=N-1;
        while(arr[high]==x && high>=0){
            high--;
        }
        while(low<high){
            if(arr[low]==x){
                swap(arr,low,high);
                high--;low++;
            }
            low++;
        }
    }

    public static void main(String[] args) {
        Scanner sc= new Scanner(System.in);
        int N=sc.nextInt();
        int []arr=new int[N];

        for(int i=0;i<N;i++){
            arr[i]=sc.nextInt();
        }

        reverseArr(arr,N);

        for(int i=0;i<N;i++){
            System.out.print(arr[i]+" ");
        }System.out.println();

        int x=sc.nextInt();
        moveXToTheRight(arr,N,x);
        for(int i=0;i<N;i++){
            System.out.print(arr[i]+" ");
        }System.out.println();

    }
}