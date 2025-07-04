// merge sort (divide and merge)
 #include<bits/stdc++.h>
 using namespace std;
void merge(vector<int>&arr, int low, int mid,int high){      // fxn for merging low---mid & mid+1-----high
    vector<int>temp={};
    int left=low;
    int right= mid+1;
    while(left<=mid && right<=high){           //iterating thorugh every element and compare 
        if(arr[left]<=arr[right]){
            temp.push_back(arr[left]);
            left++;
        }
        else{
            temp.push_back(arr[right]);
            right++;
        }
    }
    while(left<=mid){                          // whatever left after comparing will be added to temp as it as
        temp.push_back(arr[left]);
        left++;
    }
    while(right<=high){
        temp.push_back(arr[right]);
        right++;
    }
    for(int i=low; i<=high; i++){             //pushing the elements from temp to main array
        arr[i]= temp[i-low];
    }
}


 void merge_sort (vector<int>&arr, int low, int high){       // merge sort algo
    if(low==high) return;         //base condition , it returns when atlast only one element lefts inside array after dividing 
    int mid = (low + high)/2;
    merge_sort(arr,low,mid);        // dividing the array of first half low---mid
    merge_sort(arr,mid+1,high);     // dividing the array of second half mid+1---high
    merge(arr,low,mid,high);        //then merge
 }



 int main()
 {
    vector<int> arr={3,1,2,4,1,5,2,6,4};
    
    merge_sort(arr,0,arr.size()-1);

    for(int num : arr){
        cout<<num<<" ";
    }
    
 
 return 0;
 }