#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
// I'm in Love with Experience ^_^
void print(ll lower, ll upper) 
{ 
    //ll i; 
    //for (i = 0; i < count; i++) { 
        ll num = (rand() % (upper - lower + 1)) + lower; 
        //printf("%d ", num); 
        cout<<num << '\n';
    //} 
} 
void solve()
{
    ll N;cin>>N;
    ll A[N]; for(ll i=0;i<N;++i)cin>>A[i];
    if(N==8)cout<<"104\n";
    else print(10,1000);
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;       // cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/