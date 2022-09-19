import java.util.Arrays;
import java.util.Scanner;

public class waveSort{

    static void swap(int arr[],int l,int r){
        int temp=arr[l];
        arr[l]=arr[r];
        arr[r]=temp;
    }

    // static int Partition(int arr[],int l,int r){
    //     int pivot=arr[r];
    //     boolean odd=l%2==0?false:true;

    //     int j=l-1;
    //     if(odd){
    //         for(int i=l;(i+2)<r;i+=2){
    //             if(i-1>=0 && pivot>arr[i-1]){
    //                 swap(arr, i, ++j);
    //             }
    //             if(i+1<=r && pivot>arr[i+1]){
    //                 swap(arr, i, i+1);
    //             }
    //         }
    //     }else{
    //         for(int i=l;(i+2)<r;i+=2){
    //             if(i-1>=0 && pivot<arr[i-1]){
    //                 swap(arr, i, ++j);
    //             }
    //             if(i+1<=r && pivot<arr[i+1]){
    //                 swap(arr, i, i+1);
    //             }
    //         }
    //     }
    //     swap(arr, j+1, r);
    //     return j+1;
    // }

    // static void QuickSort(int arr[],int left,int right){
    //     if(left<right){
    //         int pi=Partition(arr,left,right);
    //         QuickSort(arr, left, pi-1);
    //         QuickSort(arr, pi+1, right);
    //     }
    // }
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int N=sc.nextInt();
        int arr[]=new int[N];
        for(int i=0;i<N;i++){
            arr[i]=sc.nextInt();
        }

        // QuickSort(arr,0,N-1);
        // for(int i=0;i<N;i++){
        //     System.out.print(arr[i]+" ");
        // }
        
        Arrays.sort(arr);
        for (int i = 1; i < N; i+=2) {
            if(i>0 && arr[i]>arr[i-1]){
                swap(arr, i, i-1);
            }
            if(i+1<N && arr[i]>arr[i+1]){
                swap(arr, i, i+1);
            }
        }

        for (int i = 0; i < N; i++) {
            System.out.print(arr[i]+" ");
        }System.out.println();


    }
}