def BubbleSort(arr):
    for i in range(len(arr)-1):
        for i in range(len(arr)-i-1):
            if arr[i] > arr[i+1]:
                empty = arr[i]
                arr[i] = arr[i+1]
                arr[i+1] = empty
        print(arr)


BubbleSort([9, 11, 4, 6, 3, 4])
