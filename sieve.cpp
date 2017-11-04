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

vi sieve(1000000);

void calculate_sieve()
{
	for(int i=0;i<1000000;i++)
	{
		sieve[i]=-1;
	}

	for(int i=4;i<1000000;i+=2)
	{
		sieve[i]=2;
	}

	for(int i=3;i*i<1000000;i+=2)
	{
		if(sieve[i]==-1)
		{
			for(int j=i*i;j<1000000;j+=i)
			{
				if(sieve[j]==-1)
				{
					sieve[j]=i;
				}
			}
		}
	}
}

int main()
{
	calculate_sieve();
	int t=1;
//	scanf("%d",&t);
	while(t--)
	{
		printf("%d %d %d %d %d %d\n",sieve[5],sieve[15],sieve[10],sieve[25],sieve[100],sieve[101]);
	}
}
