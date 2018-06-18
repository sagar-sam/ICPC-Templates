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



int main()
{
	int t=1;
	scanf("%d",&t);
	while(t--)
	{
		
		int x1,x2,x3,y1,y2,y3,z1,z2,z3;

		scanf("%d",&x1);
		scanf("%d",&x2);
		scanf("%d",&x3);
		scanf("%d",&y1);
		scanf("%d",&y2);
		scanf("%d",&y3);
		scanf("%d",&z1);
		scanf("%d",&z2);
		scanf("%d",&z3);
		
					int flag=0;

					if(x1 >=y1 && x2>=y2 && x3>=y3)
					{
						if(x1>y1 || x2>y2 || x3 > y3)
						{
							if(y1 >=z1 && y2>=z2 && y3>=z3)
							{
								if(y1>z1 || y2>z2 || y3 > z3)
									flag=1;

							}		
						}
					}
					if(flag==0)
					{
					if(x1 >=z1 && x2>=z2 && x3>=z3)
					{
						if(x1>z1 || x2>z2 || x3 > z3)
						{
							if(z1 >=y1 && z2>=y2 && z3>=y3)
							{
								if(z1>y1 || z2>y2 || z3 > y3)
									flag=1;

							}		
						}
					}
					if(flag==0)
					{
						if(y1 >=z1 && y2>=z2 && y3>=z3)
					{
						if(y1>z1 || y2>z2 || y3 > z3)
						{
							if(z1 >=x1 && z2>=x2 && z3>=x3)
							{
								if(z1>x1 || z2>x2 || z3 > x3)
									flag=1;

							}		
						}
					}
					if(flag==0)
					{
						if(y1 >=x1 && y2>=x2 && y3>=x3)
					{
						if(y1>x1 || y2>x2 || y3 > x3)
						{
							if(x1 >=z1 && x2>=z2 && x3>=z3)
							{
								if(x1>z1 || x2>z2 || x3 > z3)
									flag=1;

							}		
						}
					}
					if(flag==0)
					{
						if(z1 >=x1 && z2>=x2 && z3>=x3)
					{
						if(z1>x1 || z2>x2 || z3 > x3)
						{
							if(x1 >=y1 && x2>=y2 && x3>=y3)
							{
								if(x1>y1 || x2>y2 || x3 > y3)
									flag=1;

							}		
						}
					}
					if(flag==0)
					{
						if(z1 >=y1 && z2>=y2 && z3>=y3)
					{
						if(z1>y1 || z2>y2 || z3 > y3)
						{
							if(y1 >=x1 && y2>=x2 && y3>=x3)
							{
								if(y1>x1 || y2>x2 || y3 > x3)
									flag=1;

							}		
						}
					}
					}
					}
					}
					}	
					}
					if(flag==0)
						printf("no\n");
					else
						printf("yes\n");



		//fr(i,0,n){
		//	scanf("%d",&vec[i]);
		//}
	}
}
