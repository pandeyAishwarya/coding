#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
// I'm in Love with Experience ^_^
void solve()
{
    ll N;cin>>N;
    ll A[N]; for(ll i=0;i<N;++i)cin>>A[i];
    sort(A,A+N);
    ll i=0,j=N-1;
    while(i<j)
    {
        if((A[i]+A[j])==2000)
        {
            cout<<"Accepted\n";return;
        }
        else if((A[i]+A[j])<2000)++i;
        else --j;
    }
    cout<<"Rejected\n";
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/