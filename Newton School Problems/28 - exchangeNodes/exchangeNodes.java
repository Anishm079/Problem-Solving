import java.util.Scanner;

public class exchangeNodes {

    Node head;
    public class Node {
        Node next;
        Node prev;
        int val;

        Node(int val) {
            this.val = val;
            next = null;
            prev = null;
        }
    }

    public void insertion(int val){
        Node N=new Node(val);
        if(head==null){
            head=N;
//            head.next=head;
//            head.prev=head;
            return;
        }
        Node temp=head;
        while(temp.next!=null){
            temp=temp.next;
        }
        temp.next=N;
        N.prev=temp;
//        N.next=null;
    }

    public void print(){
        if(head==null){
            return;
        }
        System.out.println("All Nodes connected in DLL :");
        Node temp=head;
        while(temp.next!=null){
            System.out.print(temp.val+" ");
            temp=temp.next;
        }
        System.out.println();

        while(temp!=null){
            System.out.print(temp.val+" ");
            temp=temp.prev;
        }System.out.println();
    }

    public static Node deleteDuplicates(Node head) {
//complete this function
        Node prev=null;
        Node curr=head;
        Node Next=curr.next;
        while(Next!=null){
            if(curr.val==Next.val){
                Next=Next.next;
                Next.prev=curr;
                curr.next=Next;
            }else{
                prev=curr;
                curr=Next;
                Next=Next.next;
            }
        }
        return head;
    }


    public static void main(String[] args) {
        exchangeNodes ex=new exchangeNodes();
        Scanner sc=new Scanner(System.in);
        int N=sc.nextInt();
        for(int i=1;i<=N;i++){
            int Num=sc.nextInt();
            ex.insertion(Num);
        }

        ex.print();
        ex.head=ex.deleteDuplicates(ex.head);
        ex.print();
    }
}
