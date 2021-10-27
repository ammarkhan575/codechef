// contest on 27 october codechef  lunchtime
#include<bits/stdc++.h>
using namespace std;
int main(){
    int A,B,P,Q,T;
    cin>>T;
    while(T--){
    cin>>A>>B>>P>>Q;
    if(A%P==0 && Q%B==0 && A!=1)
    {
        cout<<"YES"<<endl;
    }
    else 
    cout<<"NO"<<endl;

    }
    

return 0;
}