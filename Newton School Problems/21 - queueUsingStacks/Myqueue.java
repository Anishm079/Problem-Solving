import java.util.Stack;

public class Myqueue {
    Stack<Integer> st=new Stack<Integer>();
    Stack<Integer> temp=new Stack<Integer>();
    Myqueue(){

    }
    public void Push(int x) {
        while (!st.isEmpty()){
            temp.push(st.peek());
            st.pop();
        }
        temp.push(x);
        while(!temp.isEmpty()){
            st.push(temp.peek());
            temp.pop();
        }
    }
    public int Pop() {
        if(st.empty()){
            return 0;
        }
        int top=st.peek();
        st.pop();
        return top;
    }

    public int Peek() {
        return st.peek();
    }

    public boolean Empty() {
        return st.isEmpty();
    }
}
