#include<bits/stdc++.h>
using namespace std;
int main(){
    int T;
    cin>>T;
    while(T--)
    {
        int n,i;
        cin>>n;
        int flag=0;

        for(i=2;i<=n/2;i++)
        {
            if(n%i==0)
            {
                flag=1;
                break;
            }
            
        }
        if(flag==0)
        cout<<"yes"<<endl;
        else
        cout<<"no"<<endl;
    }
return 0;
}