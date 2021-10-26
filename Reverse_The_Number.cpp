#include<bits/stdc++.h>
using namespace std;

int no_of_digit(int n)
{
    int count=0;
    while (n>0)
    {
        n=n/10;
        count++;
    }
    return count;
    
}
int reverse_num(int n)
{
    int digit,sum=0,last,rev_num=0;
    int total_digits=no_of_digit(n);
    while(n>0)
    {
        digit=n%10;
        rev_num=digit+rev_num*10;
        n=n/10;
    }
    return rev_num;
}

int main(){
    int T;
    cin>>T;
    while(T--)
    {
        int n;
        cin>>n;
        cout<<reverse_num(n)<<endl;
        
    }
return 0;
}