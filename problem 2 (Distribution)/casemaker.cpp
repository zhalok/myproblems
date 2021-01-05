#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
      freopen("input30.txt","w",stdout);
      srand(time(NULL));
      int t=1+rand()%1000;
      cout<<t<<endl;
      for(int i=1;i<=t;i++)
      {
          ll n=1+rand()%1000000000000000000;
          ll m=1+rand()%1000;
          ll h=1+rand()%1000;
          cout<<n<<" "<<m<<" "<<h<<endl;
      }
}