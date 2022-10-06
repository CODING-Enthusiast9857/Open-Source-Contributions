// C++ program for Quick Sort
// Time Complexity:Best Case O(Nlog(N))
// Time Complexity:Worst Case O(N^2)

#include <iostream>
using namespace std;


// Dividing the array elements
int partition(int array[], int start, int end)
{
 
    int current_array_element = array[start];
 
    int count = 0;
    for (int i = start + 1; i <= end; i++) {
        if (array[i] <= current_array_element)
            count++;
    }
 
    // Giving current array element element its correct position
    int index = start + count;
    swap(array[index], array[start]);
 
    // Sorting left and right parts of the current array element element
    int i = start, j = end;
 
    while (i < index && j > index) {
 
        while (array[i] <= current_array_element) {
            i++;
        }
 
        while (array[j] > current_array_element) {
            j--;
        }
 
        if (i < index && j > index) {
            swap(array[i++], array[j--]);
        }
    }
 
    return index;
}
 
void quickSort(int array[], int start, int end)
{
 
    // base case
    if (start >= end)
        return;
 
    // partitioning of the array
    int p = partition(array, start, end);
 
    // Sorting the left part of the array
    quickSort(array, start, p - 1);
 
    // Sorting the right part of the array
    quickSort(array, p + 1, end);
}
 
int main()
{
 
    //Asking the size of array from user
    cout<<"Enter size of Array \n";
    int n;
    cin>>n;

    int array[n];

    // Taking elements of array from user
    cout<<"\nEnter the elements of Array \n";
    for(int i=0;i<n;i++)
    {
        cin>>array[i];
    }
    
    
    //Applying Quick Sort
    quickSort(array,0, n-1);
    
    // Printing Array elements after applying Quick Sort
    cout<<"\nPrinting Array elements after applying Quick Sort \n";
    for (int i = 0; i < n; i++)
    {
        cout << array[i] << " ";
    }
    return 0;

}