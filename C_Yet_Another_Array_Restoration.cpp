#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
// I'm in Love with Experience ^_^
void solve()
{
    ll N,X,Y;cin>>N>>X>>Y;
    ll d= Y-X;
    ll p = N-1;
    while (d%p)--p;

    d /=p;
    ll s = Y - d*(N-1);
    while(s<=0)s+=d;

    for(ll i=0;i<N;++i)cout<<s<<' ',s+=d;
    cout<<'\n';
    
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/  