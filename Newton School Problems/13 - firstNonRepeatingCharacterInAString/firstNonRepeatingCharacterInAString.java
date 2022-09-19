import java.util.HashMap;
import java.util.Scanner;

public class firstNonRepeatingCharacterInAString {
/*
 * PROBLEM STATEMENT:
 * Given a string s, find the first non- repeating character in the string and
 *  return its index. If it does not exist, return -1.
 * 
 * 
 * 
 */

    static void firstNonRepeatingCh(String str){
        HashMap<Character, Integer> map = new HashMap<Character, Integer>();
        for(int i=0; i<str.length(); i++){
            if(map.containsKey(str.charAt(i))){
                map.put(str.charAt(i), map.get(str.charAt(i)) + 1);
            }else{
                map.put(str.charAt(i),1);    
            }
        }
        // System.out.println(map);
        
        int min=-1;

        for(int i=0; i<str.length(); i++){
            if(map.get(str.charAt(i))==1){
                min=i;
                break;
            }
        }

        System.out.println(min);
        // return 0;
    }


    public static void main(String[] args) {
        // firstNonRepeatingCharacterInAString LL=new firstNonRepeatingCharacterInAString();
        Scanner sc=new Scanner(System.in);
        String str=sc.nextLine();
        firstNonRepeatingCh(str);


        sc.close();
    }
}
