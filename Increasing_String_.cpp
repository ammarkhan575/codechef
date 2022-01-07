#include<bits/stdc++.h>
using namespace std;
int main(){
    int T;
    cin>>T;
    while(T--)
    {
        string s;
        cin>>s;
        for(int i=0;i<s.size();i++)
        {
            sort(s.begin(),s.end());
        }
        cout<<s<<endl;
    }
return 0;
}