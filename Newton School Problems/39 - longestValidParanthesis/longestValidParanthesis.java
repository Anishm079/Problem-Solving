import java.util.Map;
import java.util.Scanner;
import java.util.Stack;

public class longestValidParanthesis {
//  ((()
    static int maxLength(String S){
        // code here
         int start=0;
        int ans=0;
        Stack<Integer> stack =new Stack<>();
        stack.push(-1);
        for(int i=0;i<S.length();i++){
            if(S.charAt(i)=='('){
                stack.push(i);
            }
            else{
                    if(!stack.isEmpty()){
                        ans= Math.max(ans,i-stack.peek()+1);
                        stack.pop();
                    }else
                        stack.push(i);
            }
        }
        return ans;
    }

    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        String S= sc.next();
        System.out.println(maxLength(S));
    }
}
