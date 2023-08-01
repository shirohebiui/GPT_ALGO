def sort(arr):
    if len(arr) == 0:
        return []
    pivot = arr[0]

    left = []
    right = []
    for i in range(1, len(arr)):
        if arr[i] < pivot:
            left.append(arr[i])
        elif arr[i] > pivot:
            right.append(arr[i])

    return sort(left) + [pivot] + sort(right)

arr = [7,2,3,9,28,11]
print(sort(arr))