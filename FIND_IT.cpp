#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
// I'm in Love with Experience ^_^
void solve()
{
    ll N,x;cin>>N;
    map<ll,ll> M;
    for(ll i=0;i<N;++i)
    {
        cin>>x;++M[x];
    }
    for(auto i : M)
    {
        if( i.second & 1)
        {
            cout<< i.first <<'\n';
            return;
        }
    }
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/