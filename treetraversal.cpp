#include <bits/stdc++.h>

using namespace std;


#define mod 1000000007ll
#define inf 1000000000
#define fr(i,a,b) for(int i=(a);i<(b);i++)
#define fs first
#define sc second
#define pb push_back
#define mp make_pair
#define ins insert


typedef long long ll;
typedef unsigned long long ull;

typedef string st;

typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<st> vs;

typedef map<int,int> mii;
typedef map<st,int> msi;
typedef map<char,int> mci;

typedef set<int> si;
typedef set<st> ss;

typedef pair<int,int> pii;
typedef vector<pii> vpii;

const double pi = 3.14159265358979323846264338327950288419716939937510582097494459230;

map<int,int> parent;

void bfs(vector<int> edge[],int n)
{
	vector<int> visited(n);
	queue<int> q;
	int x=0;
	visited[x]=1;
	q.push(x);
	while(!q.empty())
	{
		x=q.front();
		//printf("%d  ",x);
		q.pop();
		for(int i=0;i<edge[x].size();i++)
		{
			if(visited[edge[x][i]]==0)
			{
				q.push(edge[x][i]);
				visited[edge[x][i]]=1;
				parent[edge[x][i]]=x;
	//			printf("%d %d\n",edge[x][i],parent[edge[x][i]]);
			}
		}
	}
}



int main()
{
	int n;
	scanf("%d",&n);
	vector<int> edge[n];
	int m=n-1;
	//scanf("%d",&m);
	fr(i,0,m)
	{
		int a,b;
		scanf("%d%d",&a,&b);
		a--;
		b--;
		edge[a].pb(b);
		edge[b].pb(a);
	}
	bfs(edge, n);
	//printf("\n%d %d %d\n",parent[4],parent[0],parent[5]);

}
