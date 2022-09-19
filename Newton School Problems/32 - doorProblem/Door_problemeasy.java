import java.util.*;
import java.io.*;
/*
 * PROBLEM STATEMENT:
There is a door at Newton School which can be used only by one person at a time i. e either a person can enter from the door or exit but no two people can do it simultaneously. If two person going in the opposite direction arrived at the door at the same time then these 3 cases should be considered:-
1. If the door was not used before or it was not used in the previous second then the person who wants to exit goes first.
2. If the door has been used in the previous second for entering, then the person who wants to enter goes first.
3. If the door has been used in the previous second for exiting, then the person who wants to exist goes first.

If two people arrive at the same time and going in the same direction then the person whose name in the given list comes first will go first.

Note:- To cross the door, it will take exactly one second for each person.
 */


 /*
ANALYSIS:

p1-->door && p2-->door t1===t2 p1----> because he is first to enter
if door not used in prev sec and also before that p--> enter goeas first


  */

public class Door_problemeasy{

    static void door(int t[],int ee[],int N){
        int ans[]=new int[N];
        for(int i=0;i<N;i++){
            ans[i]=0;
        }
        Queue<Integer> qEnter=new LinkedList<Integer>();
        Queue<Integer> qExit=new LinkedList<Integer>();

        //for prev person's exit (default true)
        boolean prev=true;
        int k=0;
        while(k+1<N && t[k]!=t[k+1])
        {
            if(ee[k]==1){
                prev=false;
            }
        }

        int i=0;int ct=0;
        while(i<N){
            int time=t[i];
            int j=i;
            if(ee[i]==0){
                qEnter.offer(i);
            }else{
                qExit.offer(i);
            }
            while(i+1<N && time==t[++i]){
                if(ee[i]==0){
                    qEnter.offer(i);
                }else{
                    qExit.offer(i);
                }
            }
            
            // verifcation of queue's
            System.out.print("Enter :");
            while(!qEnter.isEmpty()){
                System.out.print(qEnter.poll()+" ");
            }
            System.out.print("   Exit :");
            while(!qExit.isEmpty()){
                System.out.print(qExit.poll()+" ");
            }System.out.println();

            while((!qEnter.isEmpty() || !qExit.isEmpty()) && j<i && i+1<N && time<t[i+1]){
                if(prev==true){
                    if(!qEnter.isEmpty()){
                        ans[qEnter.peek()]=time++;
                        qEnter.poll();
                    }
                }else{
                    if(!qExit.isEmpty()){
                        ans[qExit.peek()]=time++;
                        qExit.poll();
                    }
                }
                j++;
            }
            

            if(ct==1){
                i++;
            }
            if(i==N-1){
                ct++;
            }

        }


        for(int l:ans){
            System.out.print(l+" ");
        }
        //printing all numbers
        // for(i=0;i<N;i++){
        //     System.out.print(ans[i]+" ");
        // }

        // return ans;
    }


    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int N=sc.nextInt();
        int t[]=new int[N];
        int ee[]=new int[N];

        for(int i=0;i<N;i++){
            t[i]=sc.nextInt();
        }
        for(int i=0;i<N;i++){
            ee[i]=sc.nextInt();
        }

        // int ans[]=new int[N];
        door(t,ee,N);

        

    }
}