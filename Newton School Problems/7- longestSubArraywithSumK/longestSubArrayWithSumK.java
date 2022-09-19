import java.io.*; // for handling input/output
import java.util.*; // contains Collections framework


public class longestSubArrayWithSumK {

    static int longestSubArrWithSumK(int arr[],int N,int K){
        int sum=0;
        int maxLength=0;
        HashMap<Integer,Integer> hs=new HashMap<>();
        for(int i=0;i<N;i++){
            sum+=arr[i];
            if(sum==K){
                maxLength=i+1;
            }
            if(!hs.containsKey(sum)){
                hs.put(sum,i);
            }
            if(hs.containsKey(sum-K)){
//                int x=hs.get(sum-K);
                if(maxLength<(i-hs.get(sum-K))){
                    maxLength=i-hs.get(sum-K);
                }

            }
        }
        return maxLength;
    }

    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int T= sc.nextInt();
        while(T>0){
            int N= sc.nextInt();
            int K= sc.nextInt();
            int arr[]=new int[N];
            for(int i=0;i<N;i++){
                arr[i]=sc.nextInt();
            }

            System.out.println(longestSubArrWithSumK(arr,N,K));

            T--;
        }
    }
}
