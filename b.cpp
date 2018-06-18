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


typedef long long int lli;
typedef unsigned long long int ulli;

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

//const double pi = 3.14159265358979323846264338327950288419716939937510582097494459230;


int main()
{
	int t=1;
	scanf("%d",&t);
	while(t--)
	{
		
		int n=1;
		int x;
		scanf("%d %d",&n,&x);
		float u=x*x;
		if(x==0)
		{
			for(int i=0;i<n;i++)
			{
				printf("1 ");
			}
			printf("\n");
		}
		else
		{
			if(n%2==0)
			{

			}
			else{
				printf("%f ",u);
			}
			for(int i=1;i<=n/2;i++)
			{
				printf("%f %f ",u+(float)sqrt((float)(x)*(float)(x)/(float)(n)),u-(float)sqrt((float)(x)*(float)(x)/(float)(n)));
			}
			printf("\n");
		}
		//fr(i,0,n){
		//	scanf("%d",&vec[i]);
		//}
	}
}
