#include<bits/stdc++.h>
using namespace std;
int main(){
    int T;
    cin>>T;
    while(T--)
    {
        int i;
        int X,Y,A,B,K;
        cin>>X>>Y>>A>>B>>K;
        for(i=1;i<=K;i++)
        {
            X=X+A;
            Y=Y+B;
        }
        if(X==Y){
            cout<<"SAME PRICE"<<endl;
        }
        else if(X<Y)
        cout<<"PETROL"<<endl;
        else if(X>Y)
        cout<<"DIESEL"<<endl;
    }
return 0;
}