// contest on 27 october codechef  lunchtime
#include<bits/stdc++.h>
using namespace std;
int main(){
    int A,B,P,Q,T;
    cin>>T;
    while(T--){
    cin>>A>>B>>P>>Q;
    if(A==P && Q%B==0)
    {
        cout<<"YES"<<endl;
    }
    else if(P<Q)
    cout<<"NO"<<endl;

    }
    

return 0;
}