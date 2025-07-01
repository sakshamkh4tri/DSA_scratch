#include <bits/stdc++.h>
using namespace std;

void pyramid(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        for (int k = 0; k < 2 * i + 1; k++)
        {
            cout << "*";
        }
        for (int l = 0; l < n - i - 1; l++)
        {
            cout << " ";
        }

        cout << endl;
    }
}


void invertedpyramid(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        for (int k = 0; k < 9 - (2 * i); k++)
        {
            cout << "*";
        }
        for (int l = 0; l < i; l++)
        {
            cout << " ";
        }
        cout << endl;
    }
}


void rhombus(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        for (int k = 0; k < 9-2*i; k++)
        {
            cout << "*";
        }
        for (int l = 0; l < i; l++)
        {
            cout << " ";
        }

        cout << endl;
    }
}
void rightarrow ()
{
    for(int i=0; i<9; i++){
        if(i<5){
        for(int j=0; j<i+1; j++){
            cout<<"*";
        }
    }
    else{
        for(int k=0; k<9-i; k++){
            cout<<"*";
        }
    }
       cout<<endl;
    }
}

void oddeventriangle (int n){
    for(int i=1; i<=n+1; i++){
        for(int j=1; j<+i; j++){
            if((i+j)%2==0){
                cout<<"0 ";
            }
            else{
                cout<<"1 ";
            }
        }
        cout<<endl;
        
}
}

void twonumtriangle (int n){         // (tricky one)
    
    for(int i=1; i<=n; i++){     // outer loop
        for(int j=1; j<=i; j++){       //for numbers
            cout<<j;
        }
        for(int k=1;k<=(2*n)-(2*i); k++){               // for spaces
            cout<< " ";
        }
        for(int l=i; l>=1; l--){       //for numbers
            cout<<l;
        }
        cout<<endl;
        

    }
}

void countingtriangle (int n){
    int num=1;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout<<num<<" ";
            num+=1;
        }
        cout<<endl;
    }
    }

void alphabettriangle (int n){
    for(int i=0; i<n; i++){
        for(char ch='a'; ch<='a'+i; ch++){
            cout<<ch<<" ";
        }
        cout<<endl;
    }
}

void invertedalphatri (int n){
    for(int i=1; i<=n; i++){
        for(char ch='A'; ch<='A'+ (n-i); ch++){
            cout<<ch<<" ";
        }
        cout<<endl;
    }
}

void alphapyramid (int n){     // must to be revised
    
    for(int i=1; i<=n; i++){
        for(int j=1; j<=(n-i);j++){
            cout<<" ";
        }
        char ch='A';
    int breakpoint = (2*i+1)/2;
        for(int k=1; k<=(2*i)-1; k++){
            
                cout<<ch;
                if(k<breakpoint){
                    ch++;
                }
            else{
                ch--;
            }
        }
        for(int l=1; l<=(n-1); l++){
            cout<<" ";
        }
        cout<<endl;
    }
}

void reversechartriangle (int n){     //revision
    for(int i =0; i< n; i++){
        
        for(char ch ='E'-i; ch<='E';ch++){
            cout<< ch<<" ";
            


        }
        cout<<endl;
    }
}

// square cut rhombus

void upperpart (int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<n-i; j++){
            cout<<"*"<<" ";
        }
        for(int k=0; k<2*i; k++){
            cout<<"  ";
        }
        for(int l=0; l<n-i; l++){
            cout<<"*"<<" ";       }
        cout<<endl;
    }

}

void lowerpart (int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<i+1; j++ ){
            cout<<"*"<<" ";
        }
        for(int k=0; k<2*(n-i-1); k++){
            cout<<"  ";
        }
        for(int l=0; l<i+1; l++){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
}


void hollowsquare (int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(i==0 || j==0 || i==n-1 ||j==n-1){
                cout<<"*";
            }
            else
            cout<<" ";
        }
        cout<<endl;
    }
}

void numsquare (int n){   // * revision key concept--> reduce all value by 4 then print the pattern to print the numbers find the distance and take minimal of it
    for(int i=0; i<2*n-1; i++){
        for(int j=0; j<2*n-1; j++){
            int top=i; 
            int bottom= 2*n-2-i;
            int left = j;
            int right = 2*n-2-j;
            cout<<n-min(min(left,right),min(top,bottom))<<" ";


        }
        cout<<endl;
    }
}

     


int main()
{
//     pyramid(5);
//     invertedpyramid(5);
//     rhombus(5);
//     rightarrow();
//     oddeventriangle(5);
//     twonumtriangle(4);
//     countingtriangle(5);
//     alphabettriangle(5);
//     invertedalphatri(5);
//     alphapyramid(5);
//     reversechartriangle(5);

// combine to get complete pattern
//     upperpart(5);
//     lowerpart(5);
//     hollowsquare(4);
//     numsquare(4);



}

