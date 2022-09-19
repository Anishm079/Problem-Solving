public class mergeSortInDoublyLinkedLists {
    //Creating a Node
    int size=0;
    class Node{
        int data;
        Node next;
        Node prev;
        Node(int val){
            this.data=val;
            this.next=null;
            this.prev=null;
        }

    }
    //Creating head of LL
    Node head;

    //inserting elements in Doubly Linked List
    public void insertion(int val){
        Node N=new Node(val);
        size++;
        if(head==null){
            head=N;
            return;
        }
        Node temp=head;
        while(temp.next!=null){
            temp=temp.next;
        }
        temp.next=N;
    }

    //To Print All Elements of DLL
    public void Print(){
        if(head==null){
            return;
        }
        Node temp=head;
        while(temp!=null){
            System.out.print(temp.data+"  ");
            temp = temp.next;
        }System.out.println();
    }

    //To get the Middle element of DLL
    Node getMiddleNode(Node node){
        if(node==head){return node;}
        Node slow=node,fast=node;
        while(fast!=null && fast.next!=null){
            slow=slow.next;
            fast=fast.next.next;
        }
        return slow;
    }

    //merge operation

    Node merge(Node Left,Node Right){
        if(Left==null){return Right;}
        if(Right==null){return Left;}
        Node res=null;
        if(Left.data<Right.data){
            res=Left;
            res.next=merge(Left.next,Right);
        }
        if(Left.data>Right.data){
            res=Right;
            res.next=merge(Left,Right.next);
        }
        return res;
    }



    //dividing DLL in halfs
    Node mergeSort(Node node){
        if(node==null){return null;}
        if(node.next==null){return node;}
        Node leftSide=getMiddleNode(node);
        Node rightSide=leftSide.next;
        leftSide.next=null;
        Node leftSort=mergeSort(node);
        Node rightSort=mergeSort(rightSide);

        Node res=merge(leftSort,rightSort);

        return res;

    }

    public void mergeSortInDLL(){
        mergeSort(head);

    }




    public static void main(String[] args) {
        mergeSortInDoublyLinkedLists Node=new mergeSortInDoublyLinkedLists();
//        Node.insertion(5);
//        Node.insertion(2);
//        Node.insertion(3);
//        Node.insertion(1);
//        Node.insertion(4);
//        Node.insertion(0);

        Node.insertion(3);
        Node.insertion(5);
        Node.insertion(6);
        Node.insertion(8);
        Node.insertion(1);
        Node.insertion(2);
        Node.insertion(4);
        Node.insertion(7);
        Node.Print();

        System.out.println();
        Node.head=Node.mergeSort(Node.head);
        Node.Print();


    }

}
//(7/2)=3.5