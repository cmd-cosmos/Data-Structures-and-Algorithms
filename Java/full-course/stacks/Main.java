import java.util.Stack;
// 5 core methods
// push, pop, peek, isempty, search

public class Main{
    public static void main(String[] args){
        // init stack obj
        Stack<String> stack = new Stack<String>();
        System.out.println("Initialized empty stack object");
        check_empty(stack);

        // push on check and check if empty
        stack.push("Batman");
        stack.push("Alfred");
        stack.push("Robin");
        System.out.println("Pushed 3 String objects on the stack");
        check_empty(stack);

        // peeking at the top of stack ---> expecting to see "Robin"
        String peek_val = stack.peek();
        System.out.println("Peeking(top of stack) at: " + peek_val);

        // popping val from top of stack and seeing val on top by peeking 
        stack.pop(); // should pop "Robin"
        System.out.println("Val on top post pop(): " + stack.peek() + '\n');

        // searching for a val in the stack
        // .search() returns depth from top so subtract from size of the stack
        String search_val = "Batman";
        System.err.println("Searching for Batman object on the stack...");
        get_size(stack);
        System.out.println("Object found at Index: " + (stack.size() - stack.search(search_val)) + '\n');

        String search_val_2 = "Alfred";
        System.err.println("Searching for Alfred object on the stack...");
        get_size(stack);
        System.out.println("Object found at Index: " + (stack.size() - stack.search(search_val_2)));

        }
    public static void check_empty(Stack<String> stack_instance)
    {
        // checking if stack is empty
        boolean flag = stack_instance.empty();
        System.out.println(("Stack empty flag: " + flag + '\n'));
    }
    public static void get_size(Stack<String> stack_instance)
    {
        int stack_size = stack_instance.size();
        System.out.println("Stack Size: " + stack_size);
    }
}