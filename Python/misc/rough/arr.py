#pylint: skip-file

arr: list = list(range(6))
print(arr)
arr.append(6)
arr.remove(3)
print(arr)

rev = list(reversed(arr)) # this does not modify in place and yields vals
print(rev)

arr.reverse()
print(arr)  

