public class stacksUsingLL {


//    class Node
//    {
//        int data;
//        Node next;
//        Node(int value){
//            this.data=value;
//            this.next=null;
//        }
//    }
public void print(){
    Node temp=top;
    while(temp!=null){
        System.out.println(temp.data);
        temp=temp.next;
    }
}



    Node top=null;

        public void push(int val){
            Node n=new Node(val);
            if(top==null){
                top=n;
                return;
            }
//            Node temp=top;
//            while(temp.next!=null){
//                temp=temp.next;
//            }
//            temp.next=n;
            n.next=top;
            top=n;
        }

        public void pop(){
            if(top==null){
                return;
            }
            top=top.next;
        }
        public void top(){
            if(top==null){
                System.out.println("0");
                return;
            }
            System.out.println(top.data);
        }



    public static void main(String[] args) {
        stacksUsingLL st=new stacksUsingLL();
        st.push(1);
        st.push(2);
        st.push(3);
        st.push(4);
        st.top();
        st.pop();
        st.top();
        st.pop();
        st.top();
        st.pop();
        st.top();
        st.pop();
        st.top();
        st.pop();
        st.top();
        st.pop();


//        st.print();
    }
}
