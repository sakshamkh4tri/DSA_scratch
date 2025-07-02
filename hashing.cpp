/* hashing means pre storing and fetching let say i have a array of size 5 arr[5]=1,3,2,1,3 and have total queries of 5 
 how many times 1 appear
how many times 4
2
3
12*/

// for integer hashing 

// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
// int n;
// cout<<"Size of array ";
// cin>>n;
// int arr[n];
// for(int i=0; i<n; i++){   // entering array
//     cin>>arr[i];
// }

// // pre calculation
// int hash[13]={0};         // creating a blank array from 0 to 12  and initialize as 0
// for(int i=0; i<n; i++){      
//     hash[arr[i]]+=1;     // it goes to the given index and increases its count by 1
// }

// int queries;
// cin>>queries;

// for(int i=0; i<queries; i++){
//     int number;
//     cin>>number;
//     cout<<hash[number]<<endl;
// }

// return 0;
// }

// second method for integer hashing (using maps --> it will take less storage)

// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
// int n;
// cout<<"Enter the length of array ";
// cin>>n;
// int arr[n];
// for(int i=0; i<n; i++){
//     cin>>arr[i];
// }
// map<int,int>mpp;
// for(int i=0; i<sizeof(arr); i++){
//     mpp[arr[i]]++;
// }

// // for(auto it : mpp){
// //     cout<<it.first<<"->"<<it.second<<endl;
// // }

// int querries;
// cout<<"Enter number of querries ";
// cin>>querries;
// for(int i=0; i<querries; i++){
//     int number;
//     cin>>number;
//     cout<<mpp[number]<<endl;

// }
// return 0;
// }

// for character hashing

// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
// int n;
// cout<<"Enter the length of the string ";
// cin>>n;
// string st ; // inputing string
// cout<<"Enter the string ";
// cin>>st;
// string cleaned="";     // string is cleaned and all char are converted to lowercase
// for(int i=0; i<st.size(); i++){
//     char ch= st[i];
//     if(isalnum(ch)){
//         cleaned+=tolower(ch);
//     }
// }
// int hash[26]={0};   // creates a hash array of index 0 to 25
// for(int i=0; i<n; i++){     // iterates from start to end of cleaned string
//     hash[cleaned[i]-'a']+=1;   // takes a char from cleaned string and increases the value of that correspond index in hash array
// }
// int querries;
// cout<<"Enter the num of querries ";
// cin>>querries;

// for(int i=0; i<querries ; i++){
//     char c ;
//     cin>>c;
//     cout<<hash[c-'a']<<endl;        // outputs the value of correspond index from hash array
// }
// return 0;
// }

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int num[n];
    for(int i=0; i<n; i++){
        cin>>num[i];
    }
   map<int,int>mpp;
   for(int i=0; i<n; i++){
    mpp[num[i]]++;
   }

   for(auto it : mpp){
    cout<<"["<<it.first<<","<<it.second<<"]"<<"";
   }

   

return 0;
}