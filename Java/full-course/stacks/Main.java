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
        System.out.println("Val on top post pop(): " + stack.peek());

        }
    public static void check_empty(Stack<String> stack_instance)
    {
        // checking if stack is empty
        boolean flag = stack_instance.empty();
        System.out.println(("Stack empty flag: " + flag + '\n'));
    }
}