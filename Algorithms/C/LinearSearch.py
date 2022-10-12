def LinearSearch(arr):
    print(arr)
    missing = int(input("enter the nuber you would like to search for in the list: "))
    if missing not in arr:
        print("the number cannot be found in the array")
    for i in range(0, len(arr)):
        if arr[i] == missing:
            print(f"The number has been found at position {i+1}")


LinearSearch([8, 5, 9, 3, 7, 2])
