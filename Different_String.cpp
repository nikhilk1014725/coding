#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void solve()
{
    ll N;cin>>N;
    vector<string> V;
    for(ll i=0;i<N;++i)
    {
        string s;cin>>s;
        V.push_back(s);
    }  
    string ans="";
    for(ll i=0; i<V.size();++i) 
    {
        ans+= V[i][i]=='0' ? '1' : '0'; 
    }
    cout<<ans<<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/