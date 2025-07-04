// quick sort (divide and conquer)
//step 1 -- pick a pivot and place it over a correct place in sorted array 
// step 2 smaller at left larger than pivot at left place
/*example        array -- [4,6,2,5,7,9,1,3]
                 index --  0,1,2,3,4,5,6,7
correct place of pivot --  2,1,3,4,6,5,7,9  */

#include<bits/stdc++.h>
using namespace std;

int qs(vector<int>&arr,int low,int  high){       // this fxn is for placing pivot in correct position 
    int pivot = arr[low];
   int i= low;
   int j= high;
   while(i<j){
    while(arr[i]<=pivot && i<=high-1){       // this loop find first element greater than pivot from i
        i++;
    }
    while(arr[j]>pivot && j>=low){          // this loop finds first element smalest than pivot from j
        j--;
    }

    if(i<j){                       // if i and j doesnt cross each other boundary then swap it the moment it crosses it stops
        swap(arr[i],arr[j]);
    }
  }
  swap(arr[low],arr[j]);        // final swap when i or j just cross the boundary
    return j;
}

void quick_sort(vector<int>&arr, int low, int high){          // main algorithm
    if(low<high){               // if low==high means array is containing only one element 
        int pIndex = qs(arr,low,high);    // for finding the pivot correct position
        quick_sort(arr,low, pIndex - 1);                // sorting left portion of pivot
        quick_sort(arr,pIndex + 1,high);               // sorting right portion of pivot
    }
}

int main()
{
    vector<int>arr={4,6,2,5,7,9,1,3};

    quick_sort(arr,0,arr.size()-1);

    for(int num : arr){
        cout<<num<<" ";
    }

return 0;
}