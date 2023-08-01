def fib_memo(n):
    arr = [None] * (n+1)
    arr[1] = 1
    arr[2] = 1

    i = 3
    while i <= n:
        arr[i] = arr[i-1] + arr[i-2]
        i += 1
    print(arr[n])

fib_memo(3)
fib_memo(5000000)