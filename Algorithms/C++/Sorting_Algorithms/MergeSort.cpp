// C++ program for Merge Sort
// Time Complexity:O(Nlog(N))

#include <iostream>
using namespace std;
 
// Merges two subarrays of the initial array.
// First subarray is includes array elements from left to middle elements
// Second subarray is includes array elements from middle elements +1 to right

void merge(int array[], int  left, int  mid,
           int  right)
{
    int  leftSubArray = mid - left + 1;
    int  rightSubArray = right - mid;
 
    // Creating temporary arrays
    int *leftArray = new int[leftSubArray],*rightArray = new int[rightSubArray];
 
    // data into temporary arrays leftArray[] and rightArray[]
    for (int i = 0; i < leftSubArray; i++)
        leftArray[i] = array[left + i];
    for (int j = 0; j < rightSubArray; j++)
        rightArray[j] = array[mid + 1 + j];
 
    // Initial index of left Sub Array
    int startingIndexOfleftSubArray= 0;
    
    // Initial index of Right Sub Array
    int startingIndexOfRightSubArray = 0;
    
    // Initial index of merged array
    int indexOfMergedArray= left; 
 
    // Merging the temp arrays back into original Array
    while (startingIndexOfleftSubArray < leftSubArray && startingIndexOfRightSubArray < rightSubArray) 
    {
        if (leftArray[startingIndexOfleftSubArray] <= rightArray[startingIndexOfRightSubArray]) 
        {
            array[indexOfMergedArray] = leftArray[startingIndexOfleftSubArray];
            startingIndexOfleftSubArray++;
        }
        else 
        {
            array[indexOfMergedArray] = rightArray[startingIndexOfRightSubArray];
            startingIndexOfRightSubArray++;
        }
        
        indexOfMergedArray++;
    }
    
    // Copy the remaining elements of Left Array
    while (startingIndexOfleftSubArray < leftSubArray) 
    {
        array[indexOfMergedArray] = leftArray[startingIndexOfleftSubArray];
        startingIndexOfleftSubArray++;
        indexOfMergedArray++;
    }
    
    // Copy the remaining elements of Right Array
    while (startingIndexOfRightSubArray < rightSubArray) 
    {
        array[indexOfMergedArray] = rightArray[startingIndexOfRightSubArray];
        startingIndexOfRightSubArray++;
        indexOfMergedArray++;
    }
    

}
 
// left is for left index of the sub-array and 
// right is right index of the sub-array
// of arr to be sorted */
void mergeSort(int array[], int  left, int  right)
{
    if (left >= right)
        return; // Returns recursively
 
    int mid = left + (right - left) / 2;
    mergeSort(array, left, mid);
    mergeSort(array, mid + 1, right);
    merge(array, left, mid, right);
}
 
 
// Driver code
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
    
    
    //Applying Merge Sort
    mergeSort(array, 0, n - 1);
    
    // Printing Array elements after applying Merge Sort
    cout<<"\nPrinting Array elements after applying Merge Sort \n";
    for (int i = 0; i < n; i++)
    {
        cout << array[i] << " ";
    }
    
    return 0;
}