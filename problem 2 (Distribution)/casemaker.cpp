#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
   freopen("input30.txt","w",stdout);
      srand(time(NULL));
      int t=1+rand()%1000;
      cout<<t<<endl;
      for(int i=1;i<=t;i++)
      {
          ll n=1+rand()%1000;
          cout<<n<<endl;
        for(int i=1;i<=n;i++)
        {
            ll a[i]=1+rand()%1000000000;
            cout<<a[i]<<" ";
        }
        cout<<endl;
      }
}

