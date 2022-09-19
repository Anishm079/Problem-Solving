import java.io.*;
import java.util.*;

//this code is not working for
// 5
//1 2 3 5 4
//ans:
//
//
//
//5
//4 3 2 1

public class buildingTower {



    static void buildingOfTower(int arr[],int N){
        PriorityQueue<Integer> q2 = new PriorityQueue<>(java.util.Collections.reverseOrder());
        int max=N;
        //computing result
        for (int i = 0; i < N; i++) {
            q2.add(arr[i]);



            while (!q2.isEmpty() && q2.peek() == max) {

                System.out.print(q2.poll() + " ");

                max--;

            }

            System.out.println();

        }
    }



    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);

        int N= sc.nextInt();
        int arr[]=new int[N];
        for(int i=0;i<N;i++){
            arr[i]=sc.nextInt();
        }

        buildingOfTower(arr,N);
    }


}
