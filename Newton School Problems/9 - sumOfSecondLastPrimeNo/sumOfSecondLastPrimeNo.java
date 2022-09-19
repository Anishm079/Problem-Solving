import java.util.Scanner;

/*
15-2=13 6  //need to calculate the sum of the digits which are at tenths stand
20-1=19 9   //like 11 13 17 19  1 + 1 + 1 + 1 = 4
10-3=7  3  // single digit number should be zero
20-4=16 6



5
2 15   = 2 = 1 + 1 from 11 13
1 20   = 4 = 1 + 1 + 1 + 1 from 11 13 17 19
3 10   = 0 = 0 + 0 + 0 from 03 05 07
4 20   = 4 = 1 + 1 + 1 + 1 from 11 13 17 19
5 50   = 26= 1 + 1 + 1 + 1 + 2 + 2 + 3 + 3 + 4 + 4 + 4 from 11 13 17 19 23 29 31 37 41 43 47

 */



public class sumOfSecondLastPrimeNo {

    static int SecondLastPrimeNo(int left,int right){

        int arr[]=new int[right+1];
        for(int i=0;i<=right;i++){
            arr[i]=0;
        }
        for(int i=2;i<right+1;i++){
            if(arr[i]==0){
                for(int j=i*i;j<right+1;j+=i){
//                    System.out.print(i+" ");
                    arr[j]=1;
                }
            }
        }
//        for(int i=left;i<right+1;i++){
//            if(arr[i]==0)
//                System.out.print(i+" ");
//        }System.out.println();
        int sum=0;
        for(int i=right;i>=left && i>9;i--){
            if(arr[i]==0 ){
                sum+=sumofPrimeDigits(i);
            }
        }
        return sum;
    }


    static int sumofPrimeDigits(int Num){
        int sum=0;
        int count=0;
        while(Num>0 && count<2){
            sum=(Num%10);
            Num/=10;
            count++;
        }

        return sum;
    }

    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int T= sc.nextInt();
        int sum[]=new int[T];int i=0;
        while(i<T){
            int left = sc.nextInt();
            int right = sc.nextInt();
            sum[i++]=SecondLastPrimeNo(left,right);

        }
        for(i=0;i<T;i++){
            System.out.println(sum[i]);
        }
//        int n= sc.nextInt();

    }
}
