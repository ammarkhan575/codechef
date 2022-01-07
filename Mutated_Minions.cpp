#include<bits/stdc++.h>
using namespace std;
int main(){
    int T;
    cin>>T;
    int cnt=0;
    while(T--)
    {
        int n,k;
        cin>>n>>k;
        int minion[n];
        for(int i=0;i<n;i++)
        {
            cin>>minion[i];
            minion[i]=minion[i]+k;
        }
        for(int i=0;i<n;i++)
        {
            if(minion[i]%7==0)
            cnt++;
        }

    
    }
    cout<<cnt<<endl;
    
return 0;
}