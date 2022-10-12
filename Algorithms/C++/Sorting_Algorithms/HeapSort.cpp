// C++ program for Heap Sort
// Time Complexity: O(N log(N))

#include <iostream>
using namespace std;
  
// function to heapify the tree
void heapify(int array[], int n, int largest_element)
{
    // The largest element is the largest_element.
   int largest = largest_element; 
   int l = 2*largest_element + 1; // left = 2*largest_element + 1
   int r = 2*largest_element + 2; // right = 2*largest_element + 2
  
   // In the event when left child exceeds largest_element
   if (l < n && array[l] > array[largest])
   largest = l;
  
   // If the right child outgrows the previous largest
   if (r < n && array[r] > array[largest])
   largest = r;
  
   // If largest is not largest_element
   if (largest != largest_element)
      {
      //swap largest_element and largest
      swap(array[largest_element], array[largest]);
  
      // Heapify the sub-tree recursively
      heapify(array, n, largest);
      }
}
  
// Heap Sort Function
void heapSort(int array[], int n)
{
   // Heap Building
   for (int i = n / 2 - 1; i >= 0; i--)
   heapify(array, n, i);
  
   // Taking individual elements out of the heap
   for (int i=n-1; i>=0; i--)
   {
      // Move current largest_element to end
      swap(array[0], array[i]);
  
      // again call max heapify on the reduced heap
      heapify(array, i, 0);
   }
}
  
  
// main program
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
    
    
    //Applying Heap Sort
     heapSort(array, n);
    
    // Printing Array elements after applyingHeap Sort
    cout<<"\nPrinting Array elements after applying Heap Sort \n";
    for (int i = 0; i < n; i++)
    {
        cout << array[i] << " ";
    }
    
    return 0;
}