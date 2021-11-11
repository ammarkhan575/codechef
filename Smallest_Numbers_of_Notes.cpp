#include<bits/stdc++.h>
using namespace std;
int main(){
    int T;
    cin>>T;
    int sum=0;
    while(T--)
    {
        int p;
        cin>>p;
        int sum=0;
        if(p/100>=0)
        {
            sum = sum+(p/100);
            p=p%100;
        }
        else if(p/50>=0)
        {
            sum=sum+(p/50);
            p=p%50;
        }
        else if(p/10>=0)
        {
            sum=sum+(p/10);
            p=p%10;
        }
        else if(p/5>=0)
        {
            sum=sum+(p/5);
            p=p%5;
        }
        else if(p/2>=0)
        {
            sum=sum+(p/2);
            p=p%2;
        }
        else if(p/1>=0)
        {
            sum=sum+(p/1);
        }
        cout<<sum<<endl;
    }
return 0;
}