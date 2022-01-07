#include<bits/stdc++.h>
using namespace std;
int main(){
    int T;
    cin>>T;
    while(T--)
    {
        char pref[3];
        for(int i=0;i<3;i++)
        {
            cin>>pref[i];
        }
        char sel[2];
        for(int i=0;i<2;i++)
        {
            cin>>sel[i];
        }
        int x,y;
        for(int i=0;i<3;i++)
        {
            if(sel[0]==pref[i])
            x=i;
            if(sel[1]==pref[i])
            y=i;
        }
        if(x<y)
        {
            cout<<pref[x]<<endl;
        }
        else{
            cout<<pref[y]<<endl;
        }
    }
return 0;
}