#include<bits/stdc++.h>
using namespace std;
int main(){
    int T;
    cin>>T;
    while(T--)
    {
        long int N,D,infected=1;
        cin>>N>>D;
        for(int i=1;i<=D;i++)
        {
           
            if(i<=10)
            {   if(infected*2>N)
            {
                infected=N;
                break;
            }
                infected = infected*2;
            }
            if(i>=11)
            {
                if(infected*3>N)
                {
                    infected=N;
                    break;
                }
                infected = infected *3;
            }
        }
        cout<<infected<<endl;
    }
return 0;
}