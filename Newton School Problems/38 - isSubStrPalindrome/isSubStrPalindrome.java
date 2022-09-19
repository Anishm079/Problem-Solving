import java.util.Scanner;

public class isSubStrPalindrome {
//cbabcc

    static boolean isSubStringPalindromeOdd(String str,int index){
        int low=index,high=index;

        while(low>=0 && high<str.length()){
            if(str.charAt(low)!=str.charAt(high)){
                return false;
            }
            high++;
            low--;
        }
        return true;
    }
    static boolean isSubStringPalindromeEven(String str,int index){
        int low=index,high=index+1;
//        boolean check=false;

        while(low>=0 && high<str.length()) {
            if (str.charAt(low) != str.charAt(high)) {
                return false;
            }
            high++;
            low--;
        }

        return true;
    }


    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        String str=sc.next();
        boolean check=false;
        for(int i=1;i<str.length();i++){
            if(isSubStringPalindromeOdd(str,i)||isSubStringPalindromeEven(str,i)){
                System.out.println("index  "+i +" "+str.charAt(i));
                check=true;
               break;
            }
        }

        if(check){
            System.out.println("Yes");
        }else System.out.println("No");
    }
}
