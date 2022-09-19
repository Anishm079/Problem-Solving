import java.io.*;
import java.util.*;

public class isValidParanthesis {

    static int validParanthesis(String str){
        Stack<Integer> st=new Stack<>();
        st.push(-1);
        int count=0;int ans=0;
        for(int i=0;i<str.length();i++){
            if(str.charAt(i)=='('){
                st.push(i);
            }
            else if(str.charAt(i)==')'){
                if(!st.isEmpty()){
                    st.pop();
                }

                if(!st.empty()){
                    ans=Math.max(ans,i-st.peek());
                }else{
                    st.push(i);
                }

            }
        }
        return ans;

    }


    public static void main (String[] args) {

        Scanner sc=new Scanner(System.in);
        String str=sc.next();
        System.out.println(validParanthesis(str));
    }
}
