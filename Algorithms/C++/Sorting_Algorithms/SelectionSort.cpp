// C++ program for Selection Sort
// Time Complexity: O(N^2)

#include<iostream>
using namespace std;

//Swapping the content of a and b
void swapping(int &a, int &b) {         
   int temp;
   temp = a;
   a = b;
   b = temp;
}


void selectionSort(int *array, int size) {
   int i, j, minimumIndex;
   for(i = 0; i<size-1; i++) 
   {
    //   Get index of mininmum element
      minimumIndex = i;   
      for(j = i+1; j<size; j++)
      {
          if(array[j] < array[minimumIndex])
          {
              minimumIndex = j;
          }
            
      }
         
         //Placing the minimum Element in it's correct position
         swapping(array[i], array[minimumIndex]);
   }
}


int main() {
    
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
    
    
    //Applying Selection Sort
     selectionSort(array, n);
    
    // Printing Array elements after applying Selection Sort
    cout<<"\nPrinting Array elements after applying Selection Sort \n";
    for (int i = 0; i < n; i++)
    {
        cout << array[i] << " ";
    }
    return 0;
}