//  # started from 24 june
/*first of all time complexity is not the time taken to execute the code bcoz it totally depends on config of the m/c you are using
1. it is the rate of time taken wrt input size
2. it is measured in terms of bigo notation
3.represented as o( ) inside the bracket we will be writing the theoretical time taken or the steps the program follow
4. we cant count every step manually here comes the three rules
    ---- always consider worst case scenario
    ---- avoid constants
    ---- avoid lower values  */

// some examples:-
// 1.
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             // some code
//         }
//     }
//     return 0;
// }

// the time complexity for this code is o(n*n)

// 2.

// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
// for(int i=0; i<n; i++){
//     for(int j=0; j<=i;j++){
//         // code
//     }
// }
// return 0;
// }

// time complexity is o(n^2+n/2) which reduces to o(n^2)

//space complexity

// it is the auxiliary space(space u take to solve)+ input space (the space you take to store input)
// represented in terms of bigo notation
//  for example 
//  int a =12;
//  int b=12;
//  int c=a+b;
//   here c is auxiliary and a,b are input space
//   so space complexity will be o(3)