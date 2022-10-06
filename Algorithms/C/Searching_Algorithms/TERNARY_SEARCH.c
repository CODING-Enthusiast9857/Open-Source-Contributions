#include <stdio.h>

int ternarySearch(int l, int r, int key, int arr[])
{
    if (r >= l)
    {

        int mid1 = l + (r - l) / 3;
        int mid2 = r - (r - l) / 3;

        if (arr[mid1] == key)
        {
            return mid1;
        }
        if (arr[mid2] == key)
        {
            return mid2;
        }

        if (key < arr[mid1])
        {
            return ternarySearch(l, mid1 - 1, key, arr);
        }
        else if (key > arr[mid2])
        {
            return ternarySearch(mid2 + 1, r, key, arr);
        }
        else
        {
            return ternarySearch(mid1 + 1, mid2 - 1, key, arr);
        }
    }
    return -1;
}

int main()
{
    int l, r, temp, key;

    int arr[] = {10, 50, 100, 200, 300, 400, 500, 600, 700, 1000};

    l = 0;

    r = 9;
    key = 10;
    temp = ternarySearch(l, r, key, arr);

    // Print the result
    printf("Index of %d is %d\n", key, temp);
}