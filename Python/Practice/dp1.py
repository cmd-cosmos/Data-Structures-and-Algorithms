#pylint: skip-file
import time

def unopt_fib(n):
    if n == 0:
        return 0
    if n == 1 or n == 2:
        return 1
    return unopt_fib(n-2) + unopt_fib(n-1)

start = time.time()
print(unopt_fib(30))
end = time.time()
print(f"time elapsed: {(end - start):.4f}s")


