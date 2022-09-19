package OOPS;

import java.util.Scanner;



public class oopsPart1{
// implement classes here

    // @Override
    public static int[] sort(int[] arr){
        for(int i=0;i<arr.length;i++){
            for(int j=i+1;j<arr.length;j++){
                if(arr[i]>arr[j]){
                    int temp=arr[i];
                    arr[i]=arr[j];
                    arr[j]=temp;
                }
            }
        }
        return arr;
    }



    public static void main(String[] args) {
        // oopsPart1 sort = new oopsPart1();
        int arr[]=new int[]{1,2,3,7,5,6,4,8,9,10,14,12,13,11,15};
        arr=sort(arr);
        
        for(int i=0;i<arr.length;i++) {
            System.out.print(arr[i]+" ");
        }

    }
}
