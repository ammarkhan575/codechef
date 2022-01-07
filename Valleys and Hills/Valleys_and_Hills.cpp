#include<bits/stdc++.h>
using namespace std;
int main(){
    int T;
    cin>>T;
    while(T--)
    {
        int N,M;  // N hills  M valleys
        cin>>N>>M;
        string s;
        int count=0;
        if(N>M)
        {
            s.push_back('0');
            s.push_back('1');
            s.push_back('0');
            while(s.size()<N*M){
                s.push_back('1');
                s.push_back('0');
            }
        }
        if(N<M)
        {
            s.push_back('1');
            s.push_back('0');
            s.push_back('1');
            while(s.size()<N*M){
                s.push_back('0');
                s.push_back('1');
            }
        }
        if(N==M)
        {
            s.push_back('0');
            s.push_back('1');
            s.push_back('0');
            while(s.size()<N*M){
                s.push_back('1');
                s.push_back('0');
            }
            s.pop_back();
            
        }
        cout<<s.size()<<endl;
        cout<<s<<endl;
    }
return 0;
}