#include<bits/stdc++.h>
using namespace std;
#define pii pair<int,int>
int main()
{

   freopen("input9.txt","w",stdout);

   srand(time(NULL));
   int n=1+rand()%1001;
   int limit=n*(n-1);
   limit/=2;
   int m=1+rand()%min(limit,1001);
   cout<<n<<" "<<m<<endl;
   set<pii>edges;
   vector< pair<pii,int> >cases;
   while(m--)
   {
       int x=1+rand()%(n+1);
       int y=1+rand()%(n+1);
       if(x!=y) edges.insert({x,y});
   }
  
   for(auto x:edges)
   {
       int cost=1+rand()%1001;
       cases.push_back({{x.first,x.second},cost});
   }

   for(auto x:cases) cout<<x.first.first<<" "<<x.first.second<<" "<<x.second<<endl;

   int start=1+rand()%(n+1);

   cout<<start<<endl;

}