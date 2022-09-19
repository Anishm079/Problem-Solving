public class reverseLinkedLists {

    public class Node{
        int data;
        Node next;
        Node(int value){
            this.data=value;
            this.next=null;
        }
    }

    Node head;

    void insertion(int val){
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

    void reverseLL(){
        if(head==null){
            return;
        }
        Node Prev=null,Curr=head,Next=head.next;
        while(Next!=null){
            Curr.next=Prev;
            Prev=Curr;
            Curr=Next;
            Next=Next.next;
        }
        Curr.next=Prev;
        Prev=Curr;
        head=Prev;
    }

    void print(){
        if(head==null){
            return;
        }
        Node temp=head;
        while(temp!=null){
            System.out.print(temp.data+" ");
            temp=temp.next;
        }System.out.println();
    }

    public static void main(String[] args) {
        reverseLinkedLists Node=new reverseLinkedLists();
        Node.insertion(1);
        Node.insertion(2);
        Node.insertion(3);
        Node.insertion(4);
        Node.insertion(5);
        Node.insertion(6);
        Node.print();
        Node.reverseLL();
        Node.print();
        Node.reverseLL();
        Node.print();
    }
}
