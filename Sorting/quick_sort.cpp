#include <iostream>
using namespace std;

int partition (int arr[], int low, int high)
    {
       int pivot=arr[low];
       int i=low+1;
       int j=high;
       
       while(i<=j){
           while(i <= high  && arr[i]<=pivot )
           {
               i++;
           }
           
           while( j >= low && arr[j]>pivot)
           {
               j--;
           }
           
           if(i<j)
           {
               swap (arr[i],arr[j]);
               
           }
       }
       swap( arr[low], arr[j]);
       return j;
    }
    //Function to sort an array using quick sort algorithm.
    void quickSort(int arr[], int low, int high)
    {
        if(low < high)
        {
            int pIndex=partition(arr,low ,high);
            quickSort(arr,low,pIndex-1);
            quickSort(arr,pIndex+1,high);
            
        }
    }

    int main() {
    int arr[] = {10, 7, 8, 9, 1, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Unsorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    quickSort(arr, 0, n - 1);   // sort the array

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
