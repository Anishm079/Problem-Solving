import java.util.Scanner;

public class findElementInSortedAndRotatedArray {

    static int findPivot(int arr[]){
        int i=0;
        for (i =0 ; i <arr.length-1; i++) {
            if(i+1<arr.length && arr[i]>arr[i+1]){
                return i;
            }
        }
        return i;
    }

    static void binarySearch(int arr[],int low,int high,int X){

        while(low<=high){
            int mid=(low+high)/2;
            if(arr[mid]==X){
                System.out.println("Index :"+mid);
                return;
            }
            if(arr[mid]<X){
                low++;
            }else{
                high--;
            }
        }
//        return false;
    }

    static void findElement(int arr[],int X){
        int mid=findPivot(arr);
        int low=0,high=arr.length-1;
        System.out.println("low : "+low+" mid: "+mid+" High: "+high);
        binarySearch(arr,low,mid,X);
        binarySearch(arr,mid,high,X);
//        check1=check2|check1;
//        return (check1);
    }

    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int N=sc.nextInt();
        int arr[]=new int[N];

        for(int i=0;i<N;i++){
            arr[i]=sc.nextInt();
        }

        int X=sc.nextInt();
        findElement(arr,X);
//        System.out.println(findElement(arr,X));
    }
}
