
#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
int main()
{
        nn tt;
        cin>>tt;
        while(tt--)
        {
            nn x;
            cin>>x;
            if(x & 1) cout<<(x+1)/2<<endl;
            else cout<<x/2+1<<endl;

        }
}
