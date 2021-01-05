#include<bits/stdc++.h>
using namespace std;
#define zhalok Zhalok
#define inf 1e9
#define ll long long int  
#define ull unsigned long long 
#define loop(i,a,b) for(ll i=a;i<b;i++)
#define negloop(i,a,b) for(ll i=a;i>=b;i--)
#define vi vector<int>
#define vll vector<ll>
#define vull vector<ull>
#define pb push_back
#define be begin()
#define en end()
#define pii pair<int,int>
#define pll pair<ll,ll>
#define vpii vector<pii>
#define vpll vector<pll>
#define ff first
#define ss second
#define MOD 1000000007
#define sz 10000001
#define ub upper_bound
#define lb lower_bound
#define all(v) v.begin(),v.end()


 
ll minn(ll a,ll b)
{
	return a<b?a:b;
}
 
 
 
ll maxx(ll a,ll b)
{
	return a>b?a:b;
}

ll cill(ll a,ll b)
{
	if(a%b==0)
	return a/b;
	return a/b+1;
}

/*

ll counter[sz];
 
bool primechk[sz];

ll prime_counter[sz];



void sieve()
{
	for(ll i=2;i<sz;i++)
	if(primechk[i]==false)
	{
		;
		for(ll j=i;j<sz;j+=i)
		{
		primechk[j]=true;
		prime_counter[i]+=counter[j];
		}
	}

}

*/

/*
map<int,int>counter;
ll ans1=0;
ll ans2=1;
ll mn=inf;
ll cost[100000];
vi adj1[100000];
vi adj2[100000];
bool visited[100000];
stack<int>st;

void dfs1(int n)
{
	visited[n]=true;
	for(int i=0;i<adj1[n].size();i++)
	if(visited[adj1[n][i]]==false)
	dfs1(adj1[n][i]);
	st.push(n);
}
 
int dfs2(int n)
{
	counter[cost[n]]++;
	mn=minn(mn,cost[n]);
	visited[n]=true;
	int cnt=0;
	for(int i=0;i<adj2[n].size();i++)
	if(!visited[adj2[n][i]])
	cnt+=dfs2(adj2[n][i]);

	
	return cnt+1;
}
 
 
int kossoraju(int n)
{
	int ans=1001;
	memset(visited,false,sizeof visited);
 
	for(int i=0;i<n;i++)
	if(!visited[i]) dfs1(i);
 
	memset(visited,false,sizeof visited);
 
	while(st.size())
	{
		if(visited[st.top()]==false)
		{   counter.clear();
		    mn=inf;
			int temp_ans=dfs2(st.top());
			ans1+=mn;
			
			ans2*=counter[mn];
			ans2%=MOD;
			if(temp_ans>1) ans=min(ans,temp_ans);
		}
		st.pop();
	}
	return ans;
}

*/


vi adj[1001];
vi cost[1001];
//int adjmat[1001][1001];
bool visited[1001];
int timer[1001];
int low[1001];
int ans=0;
int t=0;


void dfs(int n,int par)
{
	visited[n]=true;
	timer[n]=t++;
	low[n]=timer[n];
   // cout<<n<<" "<<par<<endl;
	for(int i=0;i<adj[n].size();i++)
	{
		int cur = adj[n][i];
	    if(visited[cur]==false) dfs(cur,n);
	}

	for(int i=0;i<adj[n].size();i++)
	{
		int cur=adj[n][i];
		if(cur!=par)
		low[n]=min(low[n],low[cur]);
		
	}

	if(timer[n]<=low[n])
	{
		
       for(int i=0;i<adj[n].size();i++)
	   {
		   int cur=adj[n][i];
		   if(cur==par) {
			   ans=max(ans,cost[n][i]);
			   break;
		   }
	   }
	   
	  //ans=max(ans,adjmat[n][par]);
	}
	



}



void solve()
{



int n,m;
cin>>n>>m;
while(m--)
{
	int x,y,c;
	cin>>x>>y>>c;
	adj[x].push_back(y);
	adj[y].push_back(x);
	cost[x].push_back(c);
	cost[y].push_back(c);
	//adjmat[x][y]=c;
	//adjmat[y][x]=c;
}



int start;
cin>>start;



dfs(start,0);
cout<<ans<<endl;


	
	



}





int main(int args,char * _argc[])
{


	freopen("specialcase4.txt","r",stdin);
    freopen("specialcase4out.txt","w",stdout);

    ios::sync_with_stdio(false);
//	int n;
//	cin>>n;
//	cout<<n<<endl;
//	printf("%.419lf\n",sqrt(n));
//	int t;
//	cin>>t;
//	while(t--)
	 solve();
    return 0;
}