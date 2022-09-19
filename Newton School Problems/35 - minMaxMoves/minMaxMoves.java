import java.util.ArrayList;
import java.util.Arrays;
import java.util.Scanner;

public class minMaxMoves{

    static int MIN=Integer.MAX_VALUE;
    static int MAX=Integer.MIN_VALUE;
    static int count=0;

    static boolean isCons(ArrayList<Integer> arr,int N){
        for(int i=1;i<N;i++){
            if(Math.abs(arr.get(i)-arr.get(i-1))>1){
                return false;
            }
        }
        return true;
    }

    static int swap(ArrayList<Integer> arr,int i,int j){
        if(i>0 && i<arr.size() &&  (arr.get(i-1)-arr.get(i))<=1 && (arr.get(i)-arr.get(i+1))<=1){
                return j;
        }else if(i>0 && (arr.get(i-1)-arr.get(i))>1){
                arr.remove(j);
                arr.add(i-1, arr.get(i)+1);
                return i-1;
        }else if(i+1<arr.size() && (arr.get(i)-arr.get(i+1))>1){
                arr.remove(j);
                arr.add(i+1, arr.get(i)+1);
                return i+1;
        }
        return j;
    }

    static int Partition(ArrayList<Integer> arr,int low,int high){
        int start=low;
        long mindist=1000000000;
        long pivot=arr.get(high);
        for(int i=low;i<high;i++){
            long dist=Math.abs(arr.get(i)-pivot);
            if(dist<mindist){
                mindist=dist;
                start=i;
            }
        }
        start=swap(arr,start,high);
        if(start!=high){
            count++;
        }
        return start;
    }


    static void QuickSort(ArrayList<Integer> arr,int low,int high){

        if(low<high){
            int pi=Partition(arr,low,high);
            if(isCons(arr, arr.size())){
                MIN=Math.min(MIN,count);
                MAX=Math.min(MAX, count);
            }
            QuickSort(arr, low, pi-1);
            QuickSort(arr, pi+1, high);
        }

    }

    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int N=sc.nextInt();
        ArrayList<Integer> arr=new ArrayList<>();
        
        for(int i=0;i<N;i++){
            int ele=sc.nextInt();
            arr.add(ele);
        }
        QuickSort(arr, 0, N-1);
        for(int i=0;i<N;i++){
            System.out.print(arr.get(i)+" ");
        }System.out.println();
        System.out.println(MIN);
        System.out.println(MAX);
        System.out.println(count);
    }
}