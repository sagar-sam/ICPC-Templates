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
		int blow=INT_MAX;
		int n=1;
		scanf("%d",&n);
		vi a(n);
		vi b(n);

		fr(i,0,n){
			scanf("%d",&a[i]);
		}
		fr(i,0,n){
			scanf("%d",&b[i]);
			if(b[i]<blow)
			{
				blow=b[i];
			}
		}
		vi modu(n);
		set<int> se;
		fr(i,0,n){
			modu[i]=a[i]%b[i];
			se.in(modu[i]);
		}
		set<int>::iterator it=se.begin();
		long long int ans=0;
		fr(i,0,n){
			if(a[i]%b[i]<*it)
			{
				ans+=(*it-a[i]%b[i]);
			}else{
				ans+=(a[i]%b[i]-*it+1);
			}
		}
		long long int tempans=0;
		while(it!=se.end()){
			tempans=0;
			it++;
			if(*it<blow){
				tempans+=ans+(n*())
			}
		}
	}
}
