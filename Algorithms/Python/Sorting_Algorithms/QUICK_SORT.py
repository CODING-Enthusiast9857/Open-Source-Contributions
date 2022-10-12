def quicksort(lst):
    if len(lst) <= 1:
        return lst

    pivot = lst.pop()
    lhs = [e for e in lst if e <= pivot]
    rhs = [e for e in lst if e > pivot]
    return quicksort(lhs) + [pivot] + quicksort(rhs)

print(quicksort(list(eval(input("Enter comma separated values : ")))))
