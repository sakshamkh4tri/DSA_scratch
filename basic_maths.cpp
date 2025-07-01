#include<bits/stdc++.h>
using namespace std;

void count_digit(int temp){
    int r,count;
    while(temp>0){
        r=temp%10;
        temp=temp/10;
        count++;

    }
    cout<<count;
}

void sum_digits (int temp){
    int r;
    int sum=0;
    while(temp>0){
        r=temp%10;
        sum+=r;
        temp=temp/10;
    }
    cout<<"\""<<sum<<"\"";
}

void reverse (int temp){
    int r;
    int reverse;
    while(temp>0){
        r=temp%10;
        temp=temp/10;
        reverse = (reverse *10) + r;
    }
    cout<<reverse;
}

void multiply_digit (int temp){
    int r,multiply =1;
    while(temp>0){
        r=temp%10;
        multiply*=r;
        temp=temp/10;
    }
    cout<<multiply;
}

void palindrome (int temp){
    int r;
    int reverse;
    int check = temp;
    while(temp>0)
    {
        r=temp%10;
        temp=temp/10;
        reverse =(reverse*10) + r;
    } 
        if(reverse==check){
            cout<< "True";
        }
        else{
            cout<<"false";
        }

    }

void armstrong (int n){        // revision
    int r; 
    int check = n;
    int sum=0;
    int count=0;
    int temp = n;
    while(temp>0){
        r=temp%10;
        count++;
        temp=temp/10;
    }
        temp=n;
        for(int i=1; i<=count; i++){
            int m;
            m =temp%10;
            temp=temp/10;
            int base = m;
            int exponential = count;
            int result = (int)pow(base,exponential);
            sum+=result;
           
        }
    if(sum==check){
       cout<< "true";
    }
    else cout<<"false";
}

void prime (int n){        // revision (aproach of divisor)
    int temp= n;
    int count=0;
    for(int i=1; i<=sqrt(temp); i++){  // o(sqrt(n))
        if(temp%i==0){
            count++;
        if((temp/i)!=i){
            count++;
        }
        }
    }
    if(count==2) cout<<"true";
    else cout<<"false";
}

void divisors (int n){
    for(int i=1; i<=n; i++){    // o(n)
          if(n%i==0){
            cout<<i<<" "<<",";
          }
    }
}

void newapproach (int n){   //revision
    vector<int> v1;
    for(int i=1; i<=sqrt(n); i++){    // o(sqrt(n))
        if(n%i==0){
          v1.push_back(i);
        if((n/i)!=i){
            v1.push_back(n/i);       
        }
      }
    }
    sort(v1.begin(),v1.end());    // o(n logn)
    for(auto it = v1.begin(); it!=v1.end(); it++){   //o(n)
        cout<<*it<<" ";
    }
}

void hcf (int x, int y){     
    int hcf=1;
    for(int i=1; i<=min(x,y); i++){
        if(x%i==0 && y%i==0){
            hcf=i;
        }
    }
    cout<<hcf;
    
}

void hcf_newapproach (int x, int y){    // revision (euclidean approach)
    while(x>0 && y>0){
        if(x>y)  x=x%y;
        else y=y%x;
    }
    if(x==0) cout<<y;
    if(y==0) cout<<x;
}




int main()
{
    int x,y;
    cout<<"Enter the number ";
    cin>>x>>y;
    //count_digit(x);
    //sum_digits(x);
    reverse(x);
    //multiply_digit(x);
    //palindrome(x); 
    //armstrong(x);
    // prime(x);
    //divisors(x);
    //newapproach(x);
    //hcf(x,y);
    //hcf_newapproach(x,y);


return 0;
}