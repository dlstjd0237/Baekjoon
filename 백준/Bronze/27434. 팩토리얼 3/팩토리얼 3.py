q = int(input())

w = 1
if q > 0:
    for i in range(1, q+1):
        w *= i
print(w)