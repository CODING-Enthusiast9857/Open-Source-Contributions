def quicksort(lst):
    if len(lst) <= 1:
        return lst

    pivot = lst.pop()
    lhs = [e for e in lst if e <= pivot]
    rhs = [e for e in lst if e > pivot]
    return quicksort(lhs) + [pivot] + quicksort(rhs)

print(quicksort([8, 1, 4, 6, 2, 5, 7, 3, 0, 9]))
