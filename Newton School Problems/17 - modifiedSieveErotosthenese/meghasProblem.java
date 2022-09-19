import java.io.*;
import java.util.*;

public class meghasProblem{

    static HashMap<Integer, Integer> sieveErotosthenese(int N){
        HashMap<Integer, Integer> map = new HashMap<Integer, Integer>(100001);
        
        int arr[] = new int[N];
        for(int i=0;i<N;i++){
            arr[i]=0;
        }
        int count=0;
        for(int i=2;i<N;i++){
            if(arr[i]==0){
                count++;
                map.put(arr[i],count);
                for(int j=i*i;j<N;j+=i){
                    arr[i]=1;
                }
            }
        }
        System.out.println(map); 
        return map;
    }

    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);

        HashMap<Integer, Integer> map=new HashMap<Integer, Integer>(100001);
        map=sieveErotosthenese(100001);
        // for(int i=10;i>=0;i--){
        //     if(map.containsKey(i)){
        //         System.out.println(map.get(i));
        //         break;
        //     }
        // }
        // int t=sc.nextInt();
        // map.put(2, 1);
        // map.put(3, 2);
        System.out.println(map);
       
        sc.close();
    }
}