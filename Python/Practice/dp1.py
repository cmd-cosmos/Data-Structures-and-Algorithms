#pylint: skip-file
import time

def unopt_fib(n):
    if n == 0:
        return 0
    if n == 1 or n == 2:
        return 1
    return unopt_fib(n-2) + unopt_fib(n-1)

start = time.time()
print(unopt_fib(40))
end = time.time()
print(f"time elapsed(unoptimized): {(end - start):.4f}s")

memo = {}
def opt_fib(n):
    if n in memo:
        return memo[n]
    if n <= 2:
        res = 1
    else:
        res = opt_fib(n - 1) + opt_fib(n - 2)
    memo[n] = res
    return res

st2 = time.time()
print(opt_fib(40))
end2 = time.time()
print(f"time elapsed(optimized): {(end2 - st2):.4f}s")


# Output --> without and with optimizaton
# 102334155
# time elapsed(unoptimized): 8.4515s
# 102334155
# time elapsed(optimized): 0.0003s