//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}


// } Driver Code Ends
class Solution
{
    public:
    int select(int arr[], int i)
    {
        // code here such that selectionSort() sorts arr[]
        int mx = -1, ind = -1;
        for (int j = i; j >= 0; j--) {
            if (mx < arr[j]) {
                mx = arr[j];
                ind = j;
            }
        }
        return ind;
    }
     
    void selectionSort(int arr[], int n)
    {
       //code here
       for (int i = n - 1; i >= 0; i--) {
        //   for (int j = i - 1; j >= 0; j--) {
               int x = select(arr, i);
               if (arr[i] < arr[x]) swap(arr[i], arr[x]);
            //   swap(arr[i], arr[select(arr, j)]);
        //   }
       }
    }
};

//{ Driver Code Starts.
 
/* Function to print an array */
void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}
 
// Driver program to test above functions
int main()
{
    int arr[1000],n,T,i;
  
    scanf("%d",&T);
    
    while(T--){
        
    scanf("%d",&n);
    
    for(i=0;i<n;i++)
      scanf("%d",&arr[i]);
      
    Solution ob;  
    ob.selectionSort(arr, n);
    printArray(arr, n);
    }
    return 0;
}

// } Driver Code Ends//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}


// } Driver Code Ends
class Solution
{
    public:
    int select(int arr[], int i)
    {
        // code here such that selectionSort() sorts arr[]
        int mx = -1, ind = -1;
        for (int j = i; j >= 0; j--) {
            if (mx < arr[j]) {
                mx = arr[j];
                ind = j;
            }
        }
        return ind;
    }
     
    void selectionSort(int arr[], int n)
    {
       //code here
       for (int i = n - 1; i >= 0; i--) {
        //   for (int j = i - 1; j >= 0; j--) {
               int x = select(arr, i);
               if (arr[i] < arr[x]) swap(arr[i], arr[x]);
            //   swap(arr[i], arr[select(arr, j)]);
        //   }
       }
    }
};

//{ Driver Code Starts.
 
/* Function to print an array */
void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}
 
// Driver program to test above functions
int main()
{
    int arr[1000],n,T,i;
  
    scanf("%d",&T);
    
    while(T--){
        
    scanf("%d",&n);
    
    for(i=0;i<n;i++)
      scanf("%d",&arr[i]);
      
    Solution ob;  
    ob.selectionSort(arr, n);
    printArray(arr, n);
    }
    return 0;
}

// } Driver Code Ends
