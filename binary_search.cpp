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

vi vec;

int first_occurence(int y,int n)
{
	int lo=0;
	int hi=n-1;
	int result=-1;
	while(lo<=hi)
	{
		int mid=(lo+hi)/2;
		if(vec[mid]==y)
		{
			result=mid;
			hi=mid-1;
		}
		else if(vec[mid]>y)
		{
			hi=mid-1;
		}
		else 
		{
			lo=mid+1;
		}
	}
	return result;
}

int last_occurence(int y, int n)
{
	int lo=0;
	int hi=n-1;
	int result=-1;
	while(lo<=hi)
	{
		int mid=(lo+hi)/2;
		if(vec[mid]==y)
		{
			result = mid;
			lo=mid+1;
		}
		else if(vec[mid]>y)
		{
			hi=mid-1;
		}
		else 
		{
			lo=mid+1;
		}
	}
	return result;
}

bool check(int mid,int y)
{
	if(vec[mid]==y)
		return true;
	else return false;
}

int binarysearch(int n,int y)
{
	int lo=0;
	int hi=n-1;
	int result=-1;
	while(lo<=hi)
	{
		int mid=(lo+hi)/2;
		if(check(mid,y))
		{
			result=mid;
			lo=mid+1;
		}
		else if(vec[mid]>y){
			hi=mid-1;
		}
		else if(vec[mid]<y){
			lo=mid+1;
		}
	}
	return result;
}

int main()
{
	int t=1;
//	scanf("%d",&t);
	while(t--)
	{
		int n=1;
		scanf("%d",&n);
		fr(i,0,n){
			int a;
			scanf("%d",&a);
			vec.pb(a);
		}
		sort(vec.begin(),vec.end());
		int ind = binarysearch(n,3);
		printf("%d\n",ind);
	}
}
