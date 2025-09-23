import java.util.Stack;

public class Main{
    public static void main(String[] args){
        Stack<String> stack = new Stack<String>();

        boolean flag = stack.empty();
        System.out.println( "Stack empty flag: " + flag);
    }
}