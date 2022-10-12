// C++ program for Binary Search
// Time Complexity: O(logN)
// Auxiliary Space: O(1)

#include <bits/stdc++.h>
using namespace std;
 
// Binary Search Algorithm
int binarySearch(int array[], int l, int r, int x)
{
    while (l <= r) {
        int m = l + (r - l) / 2;
 
        // Check if x is middle element
        if (array[m] == x)
            return m;
 
        // If x is greater of the middle element, ignore left half of the array
        if (array[m] < x)
            l = m + 1;
 
        // If x is smaller of the middle element, ignore right half of the array
        else
            r = m - 1;
    }
 
    // if element is not present
    return -1;
}
 
int main()
{
    //Taking Size of Array from user
    cout<<"Enter size of array \n";
    int n;
    cin>>n;

    // Taking Array elements from user
    cout<<"\nEnter array elements \n";
    int array[n];
    for(int i=0;i<n;i++)
    {
        cin>>array[i];
    }
    
    // Taking the element from the user to search

    int x;
    cout<<"\nEnter the Element to be searched in the array \n";
    cin>>x;
 
    // Binary Search Function call
    int found = binarySearch(array,0,n-1, x);
    
    if(found==-1)
    {
        cout << "\nElement is not present in array\n";
    }
    else
    {
        cout << "\nElement is present at index \n" << found;
    }

    return 0;
}