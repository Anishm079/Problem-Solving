import java.util.*;
import java.io.*;

public class threeWayParitioning {
    static void swap(ArrayList<Integer> A,int left,int right){
        int temp=A.get(left);
//        A.remove(left);
        A.set(left,A.get(right));
//        A.remove(right);
        A.set(right,temp);
    }
    static int Partition(ArrayList<Integer> A,int lowVal,int highVal,int l,int r){
         int pivot=A.get(r);
        int start=l;
        int i=l-1;
        int end=r;
        for(int j=l;j<r && start<end;j++){
             if((A.get(j)<pivot)){
                 i++;
                 swap(A,i,j);
             }
            if(A.get(j)<lowVal){
                swap(A,start,j);
                start++;
            }
            else if(A.get(j)>highVal){
                end--;
                swap(A,end,j);
                j--;
            }

        }

        swap(A,i+1,r);

        return i+1;
    }



    static void QuickSort(ArrayList<Integer>A,int lowVal,int highVal,int l,int r){
        if(l<r){
            int pi= Partition(A,lowVal,highVal,l,r);
            QuickSort(A,lowVal,highVal,l,pi-1);
            QuickSort(A,lowVal,highVal,pi+1,r);
        }
    }


    public static ArrayList<Integer> threeWayPartition(ArrayList<Integer> A, int l, int h)
    {
//        QuickSort(A,lowVal,highVal,0 ,A.size()-1);
        int n=A.size();

        int begin = 0, end = n-1;
        for(int i = 0; i <= end; i++)
        {
            if(A.get(i) < l)
            {
                swap(A,i, begin);
                begin++;
            }
            else if(A.get(i) > h)
            {
                swap(A,i,end);
                i--;
                end--;
            }
        }
        return A;
    }


    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int N=sc.nextInt();
        ArrayList<Integer> arr=new ArrayList<>();
        for (int i=0;i<N;i++){
            arr.add(sc.nextInt());
        }
        int low= sc.nextInt();
        int high= sc.nextInt();
        arr=threeWayPartition(arr,low,high);

        for (int i=0;i<N;i++){
            System.out.print(arr.get(i)+" ");
        }System.out.println();
    }
}
