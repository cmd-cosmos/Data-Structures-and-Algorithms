// regular queue ---> FIFO
// priority queue ---> serves highest priority elements before low priority
// In java Queue class is an interface/Abstract base class
// based on the collections heirarchy LinkedList and Priority Queues implement a queue but priority queue uses a scheme to adjust elements based on priority.
// we use linked list class which defines the Queue interface to implement regular queues
import java.util.*;

public class Main{
    public static void main(String[] args)
    {
        Queue<Double> queue = new LinkedList<>();
        // offer, poll, peek
        queue.offer(3.14);
        queue.offer(4.89);
        queue.offer(10.97);
        queue.offer(12.9);

        System.out.println(queue);
        System.out.println(queue.peek());

        queue.poll();
        System.out.println(queue);

        Queue<String> characters = new LinkedList<>();
        characters.offer("Batman");
        characters.offer("Alfred");
        characters.offer("Joker");
        characters.offer("Scarecrow");

        System.out.println(characters);

        characters.poll();
        characters.poll();

        System.out.println("After Dequeing 2 elements: " + characters);
        String peeking = characters.peek();
        System.out.println("peeking at front of queue: " + peeking);


    }
}