#include<bits/stdc++.h>
using namespace std;
int main(){
    int T;
    cin>>T;
    while(T--)
    {
        int n=3;
        int a[3];
        for(int i=0;i<3;i++)
        cin>>a[i];
        sort(a,a+n);
        cout<<a[1]<<endl;
    }
return 0;
}