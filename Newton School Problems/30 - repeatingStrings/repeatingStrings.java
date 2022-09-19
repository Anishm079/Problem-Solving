import java.util.*;
import java.io.*;


public class repeatingStrings{


    static void printDubSubstr(String str){
        HashMap<String,Integer> mp=new HashMap<>();


        for(int i=0;i<str.length()-9;i++){
            if(mp.containsKey(str.substring(i,i+10))){
                mp.put(str.substring(i,i+10),mp.get(str.substring(i,i+10))+1);
            }else{
                mp.put(str.substring(i,i+10),1);
            }    
        }


        // for(int i=0;i+10<str.length();i++){
        //     if(mp.get(str.substring(i, i+10))>1){
        //         System.out.print(str.substring(i, i+10)+" ");
        //     }
        //     // System.out.print(mp.get(str.substring(i, i+10))+" ");
        // }
        ArrayList<String> ss = new ArrayList<>();
        System.out.println();
        int i=0;
        for(String name:mp.keySet()){
            if(mp.get(name)>1){
                // System.out.print(name+" ");
                ss.add(name);
            }
        }
        if(ss.size()==0){
            System.out.print(-1);
            return;
        }

        Collections.sort(ss);

        for(int j=0;j<ss.size();j++)
            System.out.print(ss.get(j)+" ");

    }


    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        String str=sc.nextLine();
        printDubSubstr(str);
    }
}