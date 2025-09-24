// priority queue ---> FIFO
//                ---> serves highest priority elements before low priority
import java.util.*;

public class Main{
    public static void main(String[] args)
    {
        Queue<Double> queue = new LinkedList<>();
        queue.offer(3.14);
        queue.offer(4.89);
        queue.offer(10.97);
        queue.offer(12.9);

        System.out.println(queue);
        System.out.println(queue.peek());

        queue.remove();
        System.out.println(queue);


    }
}