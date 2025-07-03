// 1. selsection sort (select minimum and swap it)

#include<bits/stdc++.h>
using namespace std;
void selection_sort (int arr[], int n){
    for(int i=0; i<=n-2; i++)  //this loop is for swapping
    {  
    int min = i;
    for(int j=i; j<=n-1; j++)           // this loop is for finding minimum
    {                                  
        if(arr[min]>arr[j]){
            min=j;
        }
    }
    
    int temp=arr[min];
    arr[min]=arr[i];
    arr[i]=temp;

   }
}

void bubble_sort(int arr[], int n){
    for(int i=n-1; i>=1; i--){
        for(int j=0; j<=i-1; i++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=temp;
            }
        }
    }
}

void insertion_sort(int arr[],int n){
    for(int i=0; i<=n-1; i++){
        for(int j=i; j>0 && arr[j-1]>arr[j]; j--){
            int temp=arr[j];
            arr[j]=arr[j-1];
            arr[j-1]=temp;
        }
    }
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
for(int i=0; i<n; i++)           // inputting array
{                        
    cin>>arr[i];
}
   //selection_sort(arr, n);
   //bubble_sort(arr,n);
   insertion_sort(arr,n);
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }

}