import java.util.*;
import java.io.*;
/*
Given an unsorted array of integers, find the length of the longest consecutive elements sequence.

A consecutive set of integers is a consecutive elements sequence.

See sample for better understanding
 */
public class longestConsecutiveSequence {
    //method one
    static int longestConsecutiveSequence1(int arr[],int N){
        // HashMap<Integer,Integer> hs=new HashMap<Integer,Integer>();
        Arrays.sort(arr);
        int count=1;int ans=0;
        for(int i=1;i<N;i++){
            // System.out.println(arr[i-1]+" "+arr[i]);
            if(arr[i-1]+1==arr[i] || (arr[i-1]==arr[i])){
                if(arr[i-1]==arr[i]){
                    continue;
                }
                count++;
            }else{
                ans=Math.max(ans,count);
                count=1;
            }
        }
        return ans;
        
        // return 0;
    }

    //method two
    static int longestConsecutiveSequence2(int arr[], int n)
    {
        HashSet<Integer> S = new HashSet<Integer>();
        int ans = 0;
 
        for (int i = 0; i < n; ++i)
            S.add(arr[i]);
 
        for (int i = 0; i < n; ++i) {
            
            if (!S.contains(arr[i] - 1)) {
                
                int j = arr[i];
                while (S.contains(j))
                    j++;
 
              
                if (ans < j - arr[i])
                    ans = j - arr[i];
            }
        }
        return ans;
    }
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int N = scanner.nextInt();
        int arr[] = new int[N];
        for(int i=0;i<N;i++){
            arr[i] = scanner.nextInt();
        }
        System.out.println(longestConsecutiveSequence2(arr, N));
    }
}
