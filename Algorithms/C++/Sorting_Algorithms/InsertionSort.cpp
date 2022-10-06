// C++ program for Insertion Sort
// Time Complexity:Best Case O(N)
// Time Complexity:Worst Case O(N^2)

#include<iostream>
using namespace std;

void insertionSort(int *array, int size) 
{
   int arrayElement, j;
   for(int i = 1; i<size; i++) 
   {
       // Taking Array element
      arrayElement = array[i];
      j = i;
      
      while(j > 0 && array[j-1]>arrayElement) 
      {
         array[j] = array[j-1];
         j--;
      }
      
    //   Inserting the array element in right position
      array[j] = arrayElement;   
   }
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
    
    
    //Applying Insertion Sort
     insertionSort(array, n);
    
    // Printing Array elements after applying Insertion Sort
    cout<<"\nPrinting Array elements after applying Insertion Sort \n";
    
    for (int i = 0; i < n; i++)
    {
        cout << array[i] << " ";
    }
    
    return 0;
}