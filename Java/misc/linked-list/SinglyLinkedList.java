import java.util.NoSuchElementException;

public class SinglyLinkedList<T> {
    private Node<T> head;
    private Node<T> tail;
    private int size;

    public SinglyLinkedList() {
        // empty
    }

    public int size() {
        return size;
    }

    public boolean isEmpty() {
        return size == 0;
    }

}