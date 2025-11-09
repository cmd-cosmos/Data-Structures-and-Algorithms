#pylint: skip-file

stack = []

stack.append(10)
stack.append(20)
stack.append(30)

def print_stack(stack):
    print(f"stack: {stack}\n")
    n = len(stack)
    for i in range(n-1, -1, -1):
        print(f" | {stack[i]} | ")
        print(" -----")
    print("*"*20)

print_stack(stack=stack)

stack.pop() # pop --> O(1)
print_stack(stack=stack)

stack.append(70) # push --> O(1)
print_stack(stack=stack)

stack[-1] # peek --> O(1)

print("isempty: ",not stack) # isEmpty --> O(1)
