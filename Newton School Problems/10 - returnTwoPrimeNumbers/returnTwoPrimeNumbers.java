import java.util.*;
/*
    Here in this problem we need to calculate the two prime numbers whose sum will be N
    where N is the only input
 */
public class returnTwoPrimeNumbers {


    static  void twoPrimeNumbers(int arr[],int N,int K){
        int start=2,end=N-1;
        while(start<end){
            if(arr[start]+arr[end]==K){
                break;
            }
            if(arr[start]+arr[end]>K){
                end--;
            }else{
                start++;
            }
        }

        System.out.println(arr[start]+" "+arr[end]);
    }

    static int[] sieveErosthenese(int N){
        int arr[]=new int[N+1];
        for(int i=0;i<N+1;i++){
            arr[i]=0;
        }

        int count=0;
        for(int i=2;i<N+1;i++){
            if(arr[i]==0){
                count++;
                for(int j=i*i;j<N+1;j+=i){
                    arr[j]=1;
                }
            }
        }
//        for(int i=0;i<N+1;i++){
//            System.out.print(arr[i]+" ");
//        }
         int start=0,end=N;
        int []newArr=new int[count+2];
        int j=0;
        for(int i=0;i<N+1 && j<count+2;i++){
            if(arr[i]==0){
                newArr[j++]=i;
            }
        }

//        for(int i=0;i<count+2;i++){
//            System.out.print(newArr[i]+" ");
//        }System.out.println();
//        return count;
        return newArr;
    }

    public static void main (String[] args) {
        // Your code here
        returnTwoPrimeNumbers cl=new returnTwoPrimeNumbers();
        Scanner sc=new Scanner(System.in);
        int T=sc.nextInt();
        while(T>0) {
            int N = sc.nextInt();
            int arr[] = sieveErosthenese(N);
            twoPrimeNumbers(arr, arr.length, N);
            T--;
        }
    }
}
