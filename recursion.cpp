// recursion --> when function calls itself until a specific condition meets

// fibonacci number 

// #include<bits/stdc++.h>
// using namespace std;
// int fibonacci (int n){
//     int sum=0;
   
//     if(n==0){
//         return 0;
//     }
//     else if(n==1){
//         return 1;
//     }
//     else{
//         return fibonacci(n-2)+fibonacci(n-1);
//     }

     
// }

// int main(){
//     int n;
//     cout<<"Enter the number of terms: ";
//     cin>>n;
//     int sum=0;
//     for(int i=0; i<n; i++){
//         sum+=fibonacci(i);
//     }
//     cout<<sum;
      
    
// }

//print name n times

// #include<bits/stdc++.h>
// using namespace std;
      
// int name(int i, int n){
//     if(i>n){
//         return 0;
//     }
//     else{
//     cout<<"saksham"<<" "<<endl;
//     name(i+1,n);
//     }
// }
// int main()
// {
//     int n;
//     cin>>n;
//   name(1,n);
// return 0;
// }

// print 1 to n linearly
// #include<bits/stdc++.h>
// using namespace std;
// int print(int i, int n){
//     if(i>n){
//         return 0;
//     }
//     else{
//         cout<<i<<" ";
//         print(i+1,n);
//     }
// }

// int main()
// {
// int n; cin>>n;
// print(1,n);
// return 0;
// }

// print n to 1 linearly

// #include<bits/stdc++.h>
// using namespace std;
// int print(int n, int i){
//     if(i>n){
//         return 0;
//     }
//     else{
//         cout<<n<<" ";
//         print(n-1,i);
//     }
// }
// int main()
// {
//     int n; 
//     cin>>n;
//     print(n,1);
// return 0;
// }

//printing 1 to n using back tracking(calling a function before printing)
// #include<bits/stdc++.h>
// using namespace std;
// void print(int i, int n){
//     if(n<i){
//         return;
//     }
//       else{
//         print(i,n-1);
//         cout<< n<<" ";
//       }
    
     
// }

// int main()
// {
// int x; 
// cin>>x;
// print(1,x);
// return 0;
// }

// sum of first n mumber (parameterized way)
// #include<bits/stdc++.h>
// using namespace std;
// void sum(int i, int n){
//     if(i<1){
//         cout<<n;
//         return;
//     }
//     else{
//         sum(i-1,n+i);
//     }
// }
// int main()
// {
// int n;
// cin>>n;
// sum(n,0);
// return 0;
// }

//functional way means we only give value of n and we will be getting sum, the fxn must return something

// #include<bits/stdc++.h>   
// using namespace std;
// int sum(int n){
//     if(n==0){
//         return 0;
//     }
//     else{
//         return n+sum(n-1);
//     }
// }
// int main()
// {
// int n;
// cin>>n;
// cout<<sum(n);
// return 0;
// }

//factorial of n number

// #include<bits/stdc++.h>
// using namespace std;
// int factorial(int n){
//     if(n==0){
//         return 0;
//     }
//     if(n==1){
//         return 1;
//     }
//     else{
//         return n*factorial(n-1);
//     }
// }
// int main()
// {
// int n; cin>>n;
// cout<<factorial(n);
// return 0;
// }

// reverse of an array (using two pointers)

// #include<bits/stdc++.h>
// using namespace std;
// void reverse(int i,int arr[], int r){
//     if(i>=r){
//         return;
//     }
//     else{
//         swap(arr[i],arr[r]);
//         reverse(i+1,arr,r-1);
//     }
// }
// int main()
// {
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0; i<n; i++){
//         cin>>arr[i];
//     }
//     reverse(0,arr,n-1);
//     for(int i=0; i<n; i++){
//         cout<<arr[i]<<" ";
//     }


// return 0;
// }

// using one pointer

// #include<bits/stdc++.h>
// using namespace std;
// void reverse (int i, int n , int arr[]){
//     if(i>n/2) return ;
//     else{
//         swap(arr[i],arr[n-i-1]);
//         reverse(i+1,n,arr);
//     }
// }
// int main(){
// int n;
// cin>>n;
// int arr[n];
// for(int i=0; i<n; i++){
//     cin>>arr[i];
// }
// reverse(0,n,arr);
// for(int i=0; i<n; i++){
//     cout<<arr[i]<<" ";
// }

// }

// check a string is palindrome 

// #include<bits/stdc++.h>
// using namespace std;
// bool palindrome (string &s,int i){
    
//     if(i>s.size()/2) return true;
//     if(s[i]!=s[s.size()-i-1]) return false;
//     return palindrome(s,i+1);
// }
// int main()
// {

// string st;
// cin>>st;

// cout<<palindrome(st,0);

// return 0;
// }

// 2nd method especially when string is not clean

#include <bits/stdc++.h>
using namespace std;
    bool isPalindrome(string s) {
        string cleaned = "";

        // Step 1: Clean the string (remove non-alphanumeric, convert to lowercase)
        for (int i = 0; i < s.length(); i++) {
                char c = s[i];
            if (isalnum(c)) {
        cleaned += tolower(c);
    }
}


        // Step 2: Use two pointers to check for palindrome
        int left = 0, right = cleaned.size() - 1;
        while (left < right) {
            if (cleaned[left] != cleaned[right])
                return false;
            left++;
            right--;
        }

        return true;
    }
    int main(){
        string s="a man, a plan, a canal: Panama";
        cout<<isPalindrome(s);
    }
