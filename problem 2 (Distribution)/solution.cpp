#include<bits/stdc++.h>
using namespace std;
#define ll long long int 

ll cill(ll a,ll b)
{
    if(a%b==0) return (a/b);
    else return (a/b)+1;
}

int main()
{
    // freopen("input30.txt","r",stdin);
    // freopen("output30.txt","w",stdout);
    int t;
    cin>>t;
    while(t--)
    {
        ll n,m,h;
        cin>>n>>m>>h;
        if(n<=m) cout<<"YES"<<endl;
        else {
        if(cill(n,m)<=h) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        }


    }
}