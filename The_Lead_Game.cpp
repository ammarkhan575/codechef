#include<bits/stdc++.h>
using namespace std;
int main(){
    int R;  // no of rounds
    cin>>R;
    int lead,max_lead=0,w;
    while(R--)
    {
        int p1,p2;
        cin>>p1>>p2;
        lead=p1-p2;
        if(lead<0)
        lead=lead *(-1);

        else if(max_lead<lead)
        {
            if(p1>p2)
            {
                w=1;
            }
            else if(p1<p2)
            {
                w=2;
            }
            max_lead=lead;

        }
                
        
    }
    cout<<w<<" "<<max_lead;

return 0;
}