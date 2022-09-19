import java.util.Stack;

public class queueUsingStacks {

    public static void main(String[] args) {
        Myqueue queue=new Myqueue();
        queue.Push(1);
        queue.Push(2);
        queue.Push(3);
        queue.Push(4);
        System.out.println(queue.Peek());
        System.out.println(queue.Pop());
        System.out.println(queue.Peek());
        System.out.println(queue.Pop());
        System.out.println(queue.Peek());
        System.out.println(queue.Pop());
        System.out.println(queue.Peek());
        System.out.println(queue.Pop());
        System.out.println(queue.Empty());



    }
}
