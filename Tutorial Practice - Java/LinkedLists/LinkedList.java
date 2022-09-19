import java.net.SocketTimeoutException;

public class LinkedList {

    int size=0;
    public class Node{
        int data;
        Node next;
        Node(int value){
            this.data=value;
            this.next=null;
            size++;
        }
    }
    Node head;

    //insert At Front and Back
    void insertAtFront(int val){
        Node n=new Node(val);
        n.next=head;
        head=n;
    }

    void insertAtBack(int val){
        Node n=new Node(val);
        if(head==null){
            head=n;
            return;
        }
        Node temp=head;
        while(temp.next!=null){
            temp=temp.next;
        }
        temp.next=n;
    }


    //delete at Font and Back

    public void deleteAtFront(){
        if(head==null){
            return;
        }
//        Node temp=head;
        head=head.next;
//        Dele temp;
    }

    public void deleteAtBack(){
        if(head==null){
            return;
        }
        if(head.next==null){
            head=null;
            return;
        }
        Node temp=head;
        while(temp.next.next!=null){
            temp=temp.next;
        }
        temp.next=null;
    }
    void Print(){
        Node temp=head;
        while(temp!=null){
            System.out.print(temp.data+" ");
            temp=temp.next;
        }System.out.println();
    }

    public static void main(String[] args) {
        LinkedList Node=new LinkedList();
        Node.insertAtFront(2);
        Node.insertAtFront(1);
        Node.insertAtFront(0);
        Node.insertAtFront(-1);
        Node.insertAtBack(3);
        Node.insertAtBack(4);
        Node.insertAtBack(5);
        Node.Print();
        Node.deleteAtBack();
        Node.deleteAtFront();
        Node.Print();
    }
}
